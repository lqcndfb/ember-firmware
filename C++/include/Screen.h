/* 
 * File:   Screen.h
 * Author: Richard Greene
 *
 * Classes for handling what gets shown on the front panel displays.
 * 
 * Created on July 21, 2014, 4:58 PM
 */

#ifndef SCREEN_H
#define	SCREEN_H

#include <vector>
#include <string>

#include <PrinterStatus.h>


/// The options for aligning text on a screen.
enum Alignment
{
    // Uninitialized alignment
    UndefinedAlignment = 0,
    
    // The X position defines the left edge of the text.
    Left,
    
    // The X position defines the center position of the text.
    Center,
    
    // The X position defines the right edge of the text.
    Right      
};

/// ABC for a class that knows how to display a line of text and to show LED 
/// animations.
class IDisplay
{
public: 
    virtual void ShowText(Alignment align, unsigned char x, unsigned char y, 
             unsigned char size, int color, const char* text) = 0;
    virtual void AnimateLEDs(int animationNum) = 0;
    virtual void ShowLEDs(int numLEDs) = 0;
};

/// ABC for a class that knows how to draw itself on an IDisplay.
class IDrawable
{
public: 
    virtual void Draw(IDisplay* pDisplay) = 0;
};

class ScreenLine : IDrawable
{
public:
    ScreenLine(Alignment align, unsigned char x, unsigned char y, 
               unsigned char size, int color, const char* text);
    virtual void Draw(IDisplay* pDisplay);

protected: 
    Alignment _align;
    unsigned char _x;
    unsigned char _y;
    unsigned char _size;
    int _color;
    std::string _text; 
    
private:
    ScreenLine() {} // don't allow default construction  
};

class ReplaceableLine : public ScreenLine
{
public:
    ReplaceableLine(Alignment align, unsigned char x, unsigned char y, 
                    unsigned char size, int color, const char* text);
    void Replace(const char* placeholder, std::string replacement);
    void Draw(IDisplay* pDisplay);
    
private:
    std::string _replacedText;
};

class ScreenText : public IDrawable
{
public:
    void Add(ScreenLine* pScreenLine);
    void Draw(IDisplay* pDisplay);
    ~ScreenText();
    ReplaceableLine* GetReplaceable(int n = 1);
    
private:
    std::vector<ScreenLine*> _pScreenLines;
};


class Screen 
{
public:
    Screen(ScreenText* pScreenText, int ledAnimation);
    virtual void Draw(IDisplay* pDisplay, PrinterStatus* pStatus);
    ~Screen();
    bool NeedsClear() {return _needsClear; }
    
protected:
    ScreenText* _pScreenText;
    bool _needsClear;    
    
private:
    Screen(){} // don't allow default construction 
    int _LEDAnimation;
};

class JobNameScreen : public Screen
{
public:
    JobNameScreen(ScreenText* pScreenText, int ledAnimation);
    virtual void Draw(IDisplay* pDisplay, PrinterStatus* pStatus);
};

class ErrorScreen : public Screen
{
public:
    ErrorScreen(ScreenText* pScreenText, int ledAnimation);
    virtual void Draw(IDisplay* pDisplay, PrinterStatus* pStatus);    
};

class PrintStatusScreen : public Screen
{
public:
    PrintStatusScreen(ScreenText* pScreenText, int ledAnimation);
    virtual void Draw(IDisplay* pDisplay, PrinterStatus* pStatus); 
    
private:
    std::string _previousTime;    
};
#endif	/* SCREEN_H */
