#include <Servo.h>
Servo servoMain; // Define our Servo
int trigpin = 10;
int echopin = 11;
int distance;
float duration;
float cm;

void setup()
{
    servoMain.attach(9); // servo on digital pin 9
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
}

void loop()
{
    digitalWrite(trigpin, LOW);
    delay(500);
    digitalWrite(trigpin, HIGH);
    delay(500);
    digitalWrite(trigpin, LOW);
    duration = pulseIn(echopin, HIGH);
    cm = (duration / 58.82);
    distance = cm;

    if (distance < 100)
    {
        servoMain.write(180);
        delay(3000);
    }
    else
    {
        servoMain.write(0);
        delay(50);
    }
}