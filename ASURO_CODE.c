#include "asuro.h"
//go backward function
void backward(void){
MotorDir(RWD,RWD);
MotorSpeed(102,100);
}

//Make right go faster
void left(void){
StatusLED(GREEN);
MotorSpeed(0,125);
}

//Make left go faster
void right(void){
StatusLED(RED);
MotorSpeed(125,0);
}

//Drive in square pattern when lost
void square(void){

}

int main(void){

Init();//initialise microcontroller
unsigned int data[2]; //storage for line floower data
int black = 300; //sets black to = 300
int white = 500; //sets white to = 500

FrontLED(ON);// turn front led on

while(1){
LineData(data);//constantly check for line data

if ((data[0] <= black) && (data[1] >= white)){ //if left sensor data is less or equal to black and more than and equal to white
StatusLED(GREEN); //set status LED to green
left();//call left function

if ((data[0] <= white && (data[1] >= black{ 
StatusLED(RED)//set status LED to red
right();//call left function

if ((data[0] <= black && (data[1] >= black{ 
MotorDir(FWD,FWD);//go forward
MotorSpeed(102,100);
StatusLED(OFF);//set status LED to red

}
}
return 0;

}