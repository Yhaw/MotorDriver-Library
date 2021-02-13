#include "Arduino.h"
#include "motor.h"


Motor::Motor(byte E1,byte M1,byte M2,byte M3,byte M4,byte E2){
    e1=E1;   m2 = M2;
    e2,E2;   m3 = M3;
    m1=M1;   m4 = M4;

    pinMode(e1,OUTPUT);pinMode(e2,OUTPUT);pinMode(m1,OUTPUT);
    pinMode(m2,OUTPUT);pinMode(m2,OUTPUT);pinMode(m4,OUTPUT);
}

Motor::Forward(int pwm)
{
 analogWrite(e1,pwm);
 analogWrite(e2,pwm);
 digitalWrite(m1,HIGH);
 digitalWrite(m2,LOW);
 digitalWrite(m3,HIGH);
 digitalWrite(m4,LOW);
}

Motor::Back(int pwm)
{
 analogWrite(e1,pwm);
 analogWrite(e2,pwm);
 digitalWrite(m1,LOW);
 digitalWrite(m2,HIGH);
 digitalWrite(m3,LOW);
 digitalWrite(m4,HIGH);
}

Motor::Left(int pwm)
{
 analogWrite(e1,pwm);
 analogWrite(e2,pwm);
 digitalWrite(m1,HIGH);
 digitalWrite(m2,LOW);
 digitalWrite(m3,LOW);
 digitalWrite(m4,HIGH);
}

Motor::Right(int pwm)
{
 analogWrite(e1,pwm);
 analogWrite(e2,pwm);
 digitalWrite(m1,LOW);
 digitalWrite(m2,HIGH);
 digitalWrite(m3,HIGH);
 digitalWrite(m4,LOW);
}
