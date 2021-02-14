#include "motor.h" //Include the Library

/*
 Setup the pins for the motor driver.
 Note: All pins should be connected in the following order as indicated on the motor driver.
 Ena1 and Ena2 are Enable pin 1 and Enable Pin 2 Respectfully.
 M1,M2,M3,M4 are motor pin 1 ,pin 2,pin 3, and pin 4 respectfully.
*/
Motor Driver1(10,2,3,4,5,11); //(Ena1,M1,M2,M3,M4,Ena2)

//Motor Driver2(*,*,*,*,*,*); You can add a second Motor Driver or as many Motor Drivers.

void setup() {
}

void loop() {
  Driver1.Forward(255);    //Move the robot forward. Speed range 0 - 255.
  delay(1500);
  Driver1.Back(255);       //Move back.
  delay(1500);
  Driver1.Right(255);      //Move Right.
  delay(1500);
  Driver1.Left(255);       //Move Left   
  delay(1500);

}
