//  File:   Command.h
//  Defines the commands accepted by the printer
//
//  This file is part of the Ember firmware.
//
//  Copyright 2015 Autodesk, Inc. <http://ember.autodesk.com/>
//    
//  Authors:
//  Richard Greene
//  Jason Lefley
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  THIS PROGRAM IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL,
//  BUT WITHOUT ANY WARRANTY; WITHOUT EVEN THE IMPLIED WARRANTY OF
//  MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  SEE THE
//  GNU GENERAL PUBLIC LICENSE FOR MORE DETAILS.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, see <http://www.gnu.org/licenses/>.

#ifndef COMMAND_H
#define	COMMAND_H

#include <limits.h>

#include "ErrorMessage.h"
#include "IErrorHandler.h"

// The commands accepted by the printer
enum Command
{
    // undefined command
    UndefinedCommand = 0,
    
    // start a print
    Start,
    
    // cancel the current print in progress
    Cancel,
    
    // pause the current print in progress
    Pause,
    
    // resume the paused print in progress
    Resume,
    
    // perform a soft reset of the printer
    Reset,
    
    // show the "Downloading..." screen 
    ShowPrintDataDownloading,
    
    // show the "Download failed" screen 
    ShowPrintDownloadFailed,
    
    // verify we can accept print data and show the "Loading..." screen
    StartPrintDataLoad,
    
    // load print data and settings from print file
    ProcessPrintData,
    
    // show the data loaded screen (for use when just loading settings)
    ShowPrintDataLoaded,
        
    // re-load the settings from the settings file (after it's been changed))
    RefreshSettings,
    
    // apply print and printer settings from a file
    ApplySettings,
        
    // Show a test pattern
    Test,
    
    // Show a projector calibration image
    CalImage,
      
    // go to the registration screen 
    StartRegistering,
    
    // indicate that the printer is registered
    RegistrationSucceeded,
    
    // start the calibration procedure
    StartCalibration,
    
    // show the WiFi connecting screen
    ShowWiFiConnecting,
    
    // show the WiFi connection failed screen
    ShowWiFiConnectionFailed,
    
    // show the WiFi connected screen
    ShowWiFiConnected,
    
    // dismiss the current screen, if can be dismissed, e.g. the GettingFeedback 
    // screen, when feedback has already been recorded online
    Dismiss,
    
    // the following six commands may be used by automated test applications to
    // simulate front panel button actions
    Button1,
    Button2,
    Button1Hold,
    Button2Hold,
    Buttons1and2,
    Buttons1and2Hold,
    
    // turn the projector full on
    ShowWhite,
    
    // turn the projector full off
    ShowBlack,
    
    // Quit this application
    Exit
};

// ABC defining the interface to a class that handles commands and errors.
class ICommandTarget : public IErrorHandler
{
public:
    virtual void Handle(Command command) = 0;
    
};

#endif    // COMMAND_H

