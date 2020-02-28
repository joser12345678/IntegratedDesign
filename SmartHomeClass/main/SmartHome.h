// Virginia Tech
// ECE 2804 Integrated Design Project
//-----------------------------------------------------------------------
// Programmer: Philip Works                                              
// Filename: SmartHome.h                                                 
// Date Created: 02/24/20                                                
// Version: 1.0
// Description: This file is the header file for the SmartHome class
//-----------------------------------------------------------------------

#pragma once

/* LCD Defines */
#define RS 12                           // register select pin
#define EN 11                           // enable pin
#define D7 7                            // pins D7 - D4 on the LCD
#define D6 6
#define D5 5
#define D4 4

/* BLUETOOTH Defines */
#define RX 0                            // arduino recieving pin  
#define TX 1                            // arduino transmitting pin

/* LED Defines */
#define LED0 13                         // red LED pin
#define LED1 10                         // green LED pin

class SmartHome
{
  public:
          SmartHome();                  // default house constructor
          void smartHomeBOOTUP();       // initialize the Smart Home
          
  private:
          void setUpLCD();              // intializes the LCD screen
          void setUpBluetooth();        // intializes the Bluetooth module
          void setUpLEDs();             // intializes the LED pins
          void LEDBootBlink();          // blinks the LEDs on Boot
};
