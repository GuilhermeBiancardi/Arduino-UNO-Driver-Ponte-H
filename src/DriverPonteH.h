#include <Arduino.h>


class DCMotor {

    int MotorSpeed = 255, pin1, pin2;

    public:  

    // Pinout é o método para a declaração dos pinos que vão controlar o objeto motor
    void Pinout(int in1, int in2) {
        pin1 = in1;
        pin2 = in2;
        pinMode(pin1, OUTPUT);
        pinMode(pin2, OUTPUT);
    }

    // Forward é o método para fazer o motor girar para frente
    void Forward() {
        analogWrite(pin1, MotorSpeed);
        digitalWrite(pin2, LOW);
    }

    // Backward é o método para fazer o motor girar para trás
    void Backward() {
        digitalWrite(pin1, LOW);
        analogWrite(pin2, MotorSpeed);
    }

    // Stop é o metodo para fazer o motor ficar parado.
    void Stop() {
        digitalWrite(pin1, LOW);
        digitalWrite(pin2, LOW);
    }

    // Speed é o método para alterar a velocidade.
    void Speed(int Speed) {
        MotorSpeed = Speed;
    }

};

DCMotor MotorLeft, MotorRight;

void MotorSetup(int pin1MotorRight, int pin2MotorRight, int pin1MotorLeft, int pin2MotorLeft);
void MotorSetup(int pin1MotorRight, int pin2MotorRight, int pin1MotorLeft, int pin2MotorLeft) {
    
    MotorLeft.Pinout(pin1MotorLeft, pin2MotorLeft);
    MotorRight.Pinout(pin1MotorRight, pin2MotorRight);

    MotorLeft.Stop();
    MotorRight.Stop();

}
