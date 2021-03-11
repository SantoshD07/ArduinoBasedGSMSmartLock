# ArduinoBasedGSMSmartLock
# Aim of the Project
This project aims at providing home security system based on GSM technology. It allows a user to unlock without using traditional key.

To reduce vulnerability and to make the system more robust, it allows a user to set a password (key code) that will unlock the lock, as this code is known only by authorized personnel, There is a very less probability to unlock the code by any unauthorized person.


# Applications
    Home Security
    Secure goods transportation
    Real estate sector and many more...

# Working			         
The Project is made using Arduino Uno interfaced with a  GSM Module , when a call is made by a registered mobile number to the Arduino UNO , the user is instructed by a voice module “To Enter The Password” , when the user enters the password (key code) it is verified with the set password,if Authenticated the Arduino UNO sends a signal to the servo (electric lock) to open door, if not the call is rejected. After a time span of 30 seconds the door locked back by the servo .
**When an call is made by an unregistered mobile number the call is rejected making the system more secure.**



# Parts Used:

**1. Arduino  UNO :**
The Arduino UNO is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc. The board is equipped with sets of  
digital and analog input/output (I/O) pins that may be interfaced to various expansion boards (shields) and other circuits. The board has 14 Digital pins, 6 Analog pins, and 
programmable with the Arduino IDE (Integrated Development Environment) via a type B USB cable. It can be powered by a USB cable or by an external 9 volt battery, though 
it accepts voltages between 7 and 20 volts. 


**2. GSM Module:**
SIM800 module is a GSM quad band module. It is based on the latest GSM/GPS module SIM808 from SIMCOM, supports GSM/GPRS Quad-Band network and combines GPS technology for 
satellite navigation. It has high GPS receive sensitivity with 22 tracking and 66 acquisition receiver channels. Besides, it also supports A-GPS that available for indoor 
localization. The module is controlled by AT command via UART and supports 3.3V and 5V logical level.

**3. ISD 1820 Voice Module:**
 Voice Record Module is base on ISD1820, which a multiple‐message record/playback device. It can offers true single‐chip voice recording, no‐volatile storage, and playback capability for 8 to 20 seconds. The sample is 3.2k and the total 20s for the Recorder. This module use is very easy which you could direct control by push button on board or by Microcontroller such as Arduino, STM32.

**4. DTMF Decoder:**
The DTMF stands for ‘Dual Tone Multi-frequency’ which is one of the techniques for converting the analogue signal to digital using DTMF decoder. The DTMF decoder circuit mostly used in mobile communications system which recognizes the sequence of DTMF tones from the standard keypad of the mobile phone.  The DTMF decoder circuit used in many electronics projects for better connectivity to control the applications.

**5. LCD and Potentiometer:**
LCD (Liquid Crystal Display) screen is an electronic display module and find a wide range of applications. A 16x2 LCD display is very basic module and is very commonly used in various devices and circuits. These modules are preferred over seven segments and other multi segment LEDs.
A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD each character is displayed in 5x7 pixel matrix. This LCD has two registers, namely, Command and Data
On an LCD the potentiometer is used to adjust the bias level of the LCD - that is the contrast.


**6. Servo Motor and Jumper Wires:**
Servo motor is a type of motors whose output shaft can be moved to a specific angular position by sending it a coded signal. The servo motor will maintain the position of the shaft as long as you keep applying the coded signal. When you change the coded signal, the angular position of the shaft will change.
Jumper wires are simply wires that have connector pins at each end, allowing them to be used to connect two points to each other without soldering. Jumper wires are typically used with breadboards and other prototyping tools in order to make it easy to change a circuit as needed.
