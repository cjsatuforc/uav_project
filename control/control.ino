/*############################################################################
#                                                                            #
#                      Arduino Control Program V0.1                          #
#                                                                            #
#Description: Controls motors for UAV. Should respond to various sensor      #
#             inputs like a gyroscope as well as commands from an external   #
#             device.                                                        #
#Condition: NOT TESTED                                                       #
#                                                                            #
#Inputs: TBC                                                                 #
#Outputs: TBC                                                                #
#Notes:                                                                      #
#                                                                            #
#Written by: Stuart Griffiths (sagriffiths87@gmail.com)                      #
#Project details: https://github.com/sagriff/uav_project/                    #
#License: Apache Version 2.0 http://www.apache.org/licenses/                 #
############################################################################*/


//If you use any of this code, then please let me know. It would be great for
//my work to help others.


//VARIABLES  
//#########

int in_control = 21;


//Setup Function
//##############

void setup() {

//pinModes
pinMode(in_control, INPUT);

//Interrupts

//Serial - Debug through USB, comms to RaspPi
Serial.begin(9600);

//read EEPROM for stored errors?

//debug serial output and LED output

//TCIC checks and decisions - go to support function if not in control

int control = LOW;
delay(10); //allows for switching delay
contol = digitalRead(in_control);

if (control = LOW)
{
 support_function();
}


}

//Loop Function
//#############

void loop() {

//determine direction of heading
//read compass? - could be a Rasp Pi job

//determine whether level
//read gyro

//interrupt - direction
//go to a set funtion to head in that direction

//status signal aquisition


}

/*****************************************************************************
                           support_function Function

Listens for serial commands sent from the channel in control. Counts between
commands sent. If a command has not been sent for a set period of time, then
attempt to hand shake. If hand shake attempt fails, take control. 
Should be able to ignore 5V control signal this way (part of setup function).

Status: WIP
Possible Improvements:
*****************************************************************************/

void support_function(void)
{
//receive loop start
//count for x time
//if x time > error_limit, send signal
//wait for return character
//if no return, take control.

//alt idea
//monitors same inputs as control, stores action in EEPROM
//if issue found, asserts control, reads EEPROM to determine states
//saves position code checking?
}


/*****************************************************************************
                               usb_mode Function

Listens for serial commands sent from controlling computer. Determines the 
desired operation to be completed. Calls appropriate function. Returns to
loop()?

Status: WIP

Possible Improvement: Conditions for each mode. This will ensure that the 
                      blades will only spin if it is safe etc. Could be 
                      implemented through boolean expressions.
*****************************************************************************/

void usb_mode(void){
char usb_input;
while(Serial.available())
{
usb_input = (char)Serial.read();
}

if(usb_input == 'A')
{
//go to function
}

if(usb_input == 'a')
{
//go to another function
}

//repeat for each function. 
} 
