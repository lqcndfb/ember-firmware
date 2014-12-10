#ifndef FONTAD_H
#define FONTAD_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#else
 #define PROGMEM
#endif
 
#define FONT1_WIDTH 12
#define FONT1_HEIGHT 14
#define FONT1_START_CHAR ' '
#define FONT1_END_CHAR 0x7F


static const unsigned char adfont1[] PROGMEM = {
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 
        0x01, 0xFC, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char !
        0x02, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char "
        0x05, 0x00, 0x00, 0xF0, 0x03, 0x20, 0x01, 0x20, 0x01, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char #
        0x06, 0x38, 0x04, 0x48, 0x04, 0xFC, 0x0F, 0x88, 0x04, 0x08, 0x05, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char $
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char %
        0x07, 0x80, 0x07, 0xB8, 0x08, 0x44, 0x08, 0xA4, 0x08, 0x18, 0x0D, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char &
        0x01, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char '
        0x04, 0x00, 0x00, 0xF8, 0x07, 0x04, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char (
        0x03, 0x04, 0x08, 0x04, 0x08, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char )
        0x04, 0x00, 0x00, 0x18, 0x00, 0x3C, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char *
        0x06, 0x80, 0x00, 0x80, 0x00, 0xF0, 0x03, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char +
        0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ,
        0x05, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char -
        0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char .
        0x06, 0x00, 0x08, 0x00, 0x06, 0x80, 0x01, 0x60, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char /
        0x08, 0x00, 0x00, 0xF0, 0x03, 0x18, 0x04, 0x24, 0x08, 0xC4, 0x08, 0x04, 0x0B, 0x08, 0x04, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 0
        0x02, 0x04, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
        0x07, 0x00, 0x00, 0x04, 0x0C, 0x04, 0x0A, 0x04, 0x09, 0xC4, 0x08, 0x24, 0x08, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 2
        0x06, 0x04, 0x08, 0x84, 0x08, 0x84, 0x08, 0x84, 0x08, 0x84, 0x08, 0x78, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 3
        0x06, 0x80, 0x03, 0x40, 0x02, 0x20, 0x02, 0x10, 0x02, 0x0C, 0x02, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 4
        0x07, 0x00, 0x00, 0x7C, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x84, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 5
        0x08, 0x00, 0x00, 0xF8, 0x07, 0x24, 0x08, 0x24, 0x08, 0x24, 0x08, 0x24, 0x08, 0x38, 0x08, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 6
        0x06, 0x04, 0x00, 0x04, 0x00, 0x04, 0x0C, 0x04, 0x03, 0xE4, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 7
        0x08, 0x00, 0x00, 0x80, 0x07, 0x78, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x78, 0x08, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 8
        0x07, 0x00, 0x00, 0x78, 0x06, 0x84, 0x08, 0x84, 0x08, 0x84, 0x08, 0x84, 0x08, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 9
        0x02, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char :
        0x02, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ;
        0x04, 0x80, 0x00, 0x40, 0x01, 0x30, 0x03, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char <
        0x05, 0x00, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char =
        0x04, 0x00, 0x00, 0x30, 0x02, 0x20, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char >
        0x06, 0x00, 0x00, 0x84, 0x09, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ?
        0x0A, 0x00, 0x00, 0xF8, 0x07, 0x04, 0x08, 0xC2, 0x13, 0x72, 0x12, 0x52, 0x12, 0x52, 0x12, 0xF2, 0x1F, 0x04, 0x00, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00,  // Code for char @
        0x09, 0x00, 0x08, 0x00, 0x06, 0xE0, 0x01, 0x18, 0x01, 0x04, 0x01, 0x38, 0x01, 0xC0, 0x01, 0x00, 0x0E, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char A
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x78, 0x08, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char B
        0x07, 0x00, 0x00, 0xF0, 0x03, 0x08, 0x04, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char C
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x08, 0x04, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char D
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x44, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char E
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x44, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char F
        0x08, 0x00, 0x00, 0xF0, 0x03, 0x08, 0x04, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x88, 0x04, 0x90, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char G
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char H
        0x02, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char I
        0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char J
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x40, 0x00, 0x40, 0x00, 0xE0, 0x00, 0x10, 0x01, 0x08, 0x06, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char K
        0x07, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char L
        0x0A, 0x00, 0x00, 0xFC, 0x0F, 0x0C, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x20, 0x00, 0x18, 0x00, 0x04, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00,  // Code for char M
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x1C, 0x00, 0x60, 0x00, 0x80, 0x01, 0x00, 0x06, 0x00, 0x08, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char N
        0x08, 0x00, 0x00, 0xF0, 0x03, 0x08, 0x04, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x08, 0x04, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char O
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x84, 0x00, 0x84, 0x00, 0x84, 0x00, 0x84, 0x00, 0xCC, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char P
        0x08, 0x00, 0x00, 0xF0, 0x03, 0x08, 0x04, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x08, 0x04, 0xF0, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Q
        0x08, 0x00, 0x00, 0xFC, 0x0F, 0x84, 0x00, 0x84, 0x00, 0x84, 0x00, 0x84, 0x01, 0xCC, 0x06, 0x78, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char R
        0x07, 0x18, 0x08, 0x24, 0x08, 0x44, 0x08, 0x84, 0x08, 0x04, 0x09, 0x04, 0x09, 0x04, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char S
        0x07, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0xFC, 0x0F, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char T
        0x08, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char U
        0x08, 0x04, 0x00, 0x38, 0x00, 0xC0, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0xE0, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char V
        0x0C, 0x00, 0x00, 0x7C, 0x00, 0x80, 0x07, 0x00, 0x08, 0x80, 0x07, 0x60, 0x00, 0x3C, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00, 0x0F, 0xF0, 0x00, 0x0C, 0x00,  // Code for char W
        0x08, 0x00, 0x00, 0x0C, 0x0C, 0x10, 0x02, 0x20, 0x01, 0xC0, 0x00, 0x20, 0x03, 0x18, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char X
        0x07, 0x0C, 0x00, 0x10, 0x00, 0x20, 0x00, 0xC0, 0x0F, 0x20, 0x00, 0x10, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Y
        0x07, 0x04, 0x0C, 0x04, 0x0A, 0x84, 0x09, 0x44, 0x08, 0x24, 0x08, 0x1C, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Z
        0x04, 0x00, 0x00, 0xFC, 0x0F, 0x04, 0x08, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char [
        0x04, 0x0C, 0x00, 0x70, 0x00, 0x80, 0x03, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char BackSlash
        0x03, 0x04, 0x08, 0x04, 0x08, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ]
        0x06, 0x10, 0x00, 0x18, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ^
        0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char _
        0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char `
        0x06, 0x00, 0x00, 0x20, 0x06, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char a
        0x06, 0x00, 0x00, 0xFC, 0x0F, 0x20, 0x08, 0x20, 0x08, 0x60, 0x0C, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char b
        0x05, 0x00, 0x00, 0xC0, 0x07, 0x60, 0x0C, 0x20, 0x08, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char c
        0x05, 0xC0, 0x07, 0x60, 0x0C, 0x20, 0x08, 0x20, 0x08, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char d
        0x06, 0x00, 0x00, 0xC0, 0x07, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char e
        0x05, 0x00, 0x00, 0xF8, 0x0F, 0x24, 0x00, 0x24, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char f
        0x06, 0x00, 0x00, 0xC0, 0x27, 0x20, 0x28, 0x20, 0x28, 0x20, 0x28, 0xE0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char g
        0x06, 0x00, 0x00, 0xFC, 0x0F, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char h
        0x02, 0x00, 0x00, 0xD0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char i
        0x03, 0x00, 0x20, 0x00, 0x30, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char j
        0x06, 0x00, 0x00, 0xFC, 0x0F, 0x80, 0x00, 0x80, 0x01, 0x40, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char k
        0x02, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char l
        0x0A, 0x00, 0x00, 0xE0, 0x0F, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xC0, 0x0F, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00,  // Code for char m
        0x06, 0x00, 0x00, 0xE0, 0x0F, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char n
        0x06, 0x00, 0x00, 0xC0, 0x07, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char o
        0x06, 0x00, 0x00, 0xE0, 0x3F, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0xC0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char p
        0x06, 0xC0, 0x07, 0x60, 0x08, 0x20, 0x08, 0x20, 0x08, 0x60, 0x0C, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char q
        0x05, 0x00, 0x00, 0xC0, 0x0F, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char r
        0x05, 0x00, 0x00, 0xE0, 0x08, 0x20, 0x09, 0x20, 0x0A, 0x20, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char s
        0x05, 0x00, 0x00, 0xFC, 0x07, 0x20, 0x0C, 0x20, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char t
        0x06, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char u
        0x06, 0x40, 0x00, 0x80, 0x03, 0x00, 0x0C, 0x00, 0x0E, 0x80, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char v
        0x08, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00, 0x07, 0xC0, 0x01, 0x00, 0x0E, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char w
        0x05, 0x00, 0x00, 0xC0, 0x0C, 0x00, 0x03, 0x80, 0x03, 0x40, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char x
        0x06, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x33, 0x00, 0x0C, 0x80, 0x03, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char y
        0x05, 0x00, 0x00, 0x20, 0x0E, 0x20, 0x09, 0xE0, 0x08, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char z
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char {
        0x02, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char |
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char }
        0x07, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x40, 0x00, 0x80, 0x00, 0x80, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ~
        0x03, 0xFC, 0x0F, 0x04, 0x08, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00   // Code for char 
        };


#endif 
