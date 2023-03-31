#include <Arduino.h>
#include <DriverPonteH.h>

// Digital Pin
#define pin1MotorLeft 6
// Digital Pin PWM
#define pin2MotorLeft 7
// Digital Pin
#define pin1MotorRight 4
// Digital Pin PWM
#define pin2MotorRight 5

void setup() {
    MotorSetup(pin1MotorRight, pin2MotorRight, pin1MotorLeft, pin2MotorLeft);
}

void loop() {

    MotorLeft.Forward();
    MotorRight.Forward();
    delay(3000);
    
    MotorLeft.Stop();
    MotorRight.Stop();
    delay(500);

    MotorLeft.Speed(150);
    MotorRight.Speed(150);
    delay(500);

    MotorLeft.Forward();
    MotorRight.Forward();
    delay(3000);

    MotorLeft.Stop();
    MotorRight.Stop();
    delay(3000);

}