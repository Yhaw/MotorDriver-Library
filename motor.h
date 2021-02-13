#include "Arduino.h"


class Motor
{
  public:
    Motor(byte E1,byte M1,byte M2,byte M3,byte M4,byte E2);
    Forward(int pwm);
    Back(int pwm);
    Left(int pwm);
    Right(int pwm);

  private:
    byte e1,e2,m1,m2,m3,m4;
};
