// Write arduino code to rotate Stepper Motor and do interfacing &
simulation with arduino on ISIS Proteus.

#include <Stepper.h>
int stepsPerRevolution = 20;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
void setup()
{
 // set the speed at 40 rpm:
 myStepper.setSpeed(40);
}
void loop()
{
 // step one revolution in one direction:
 myStepper.step(stepsPerRevolution);
 delay(20);
 myStepper.step(~stepsPerRevolution);
 delay(20);
}
