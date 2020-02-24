// Virginia Tech
// ECE 2804 Integrated Design Project
//-----------------------------------------------------------------------
// Programmer: Philip Works                                              
// Filename: SmartHome.cpp                                                 
// Date Created: 02/24/20                                                
// Version: 1.0
// Description: This file is the implementation file for the SmartHome
//              class
//-----------------------------------------------------------------------

#include "SmartHome.h"
#include <LiquidCrystal.h>                // allow access to LCD functions from the LiquidCrystal class
#include <Arduino.h>                      // allow access to Arduino functions

LiquidCrystal LCD(RS,EN,D4,D5,D6,D7);     // instantiation of an LCD object from the LCD class

SmartHome::SmartHome(){}                  // default constructor for class instantiation

void SmartHome::smartHomeBOOTUP()         // initialization of the smarthome
{
  setUpLCD();                             // setting up the LCD screen
  setUpBluetooth();                       // setting up the Bluetooth module
  setUpLEDs();                            // setting up the LEDs
}

void SmartHome::setUpLCD()                // initializes the LCD
{
  LCD.begin(16,2);                        // begins communication with the LCD screen
  LCD.print("SmartHome");                 // initialization message 1
  LCD.setCursor(0,1);                     // set cursor to the second row
  LCD.print("BOOTUP STARTED");            // initialization message 2
  delay(1500);                            // wait one second to display the boot message
  LCD.clear();                            // clear the LCD
}

void SmartHome::setUpBluetooth()          // intializes the Bluetooth module
{
  // MAY NOT BE NEEDED, NOT SURE YET. MIGHT WANT TO MAKE A CLASS FOR THE MODULE ITSELF AND INSTANTIATE THE OBJECT IN THIS ONE 
}

void SmartHome::setUpLEDs()               // intializes the LEDs
{ // MAY WANT TO MAKE AN LED CLASS WITH SPECIFIC FUNCTIONS
  pinMode(LED0,OUTPUT);                   // configure pin 13 as an output
  pinMode(LED1,OUTPUT);                   // configure pin 10 as an output
  LEDBootBlink();                         // LEDs execute boot blink
}

void SmartHome::LEDBootBlink()            // blinks the LEDs on Boot
{
  for(int i = 0; i < 2; i++)              // loop twice to achieve two blinks per LED
  {
    digitalWrite(LED0,HIGH);              // write pin 13 HIGH
    digitalWrite(LED1,LOW);               // write pin 10 LOW
    delay(500);                           // .5s delay
    digitalWrite(LED0,LOW);               // write pin 13 LOW
    digitalWrite(LED1,HIGH);              // write pin 10 HIGH
    delay(500);                           // .5s delay                     
  }
  digitalWrite(LED0,LOW);                 // write pin 13 LOW
  digitalWrite(LED1,LOW);                 // write pin 10 LOW
}
