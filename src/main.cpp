#include <Arduino.h>
#define ledPin 5 // Connect LED on pin 13, or use the onboard one
#define KEY 16   // Connect Touch sensor on Digital Pin 2

void setup()
{
    pinMode(ledPin, OUTPUT); // Set ledPin to output mode
    pinMode(KEY, INPUT);     // Set touch sensor pin to input mode
}

void loop()
{
    if (digitalRead(KEY) == HIGH)
    {                               // Read Touch sensor signal
        digitalWrite(ledPin, LOW); // if Touch sensor is HIGH, then turn on
    }
    else
    {
        digitalWrite(ledPin, HIGH); // if Touch sensor is LOW, then turn off the led
    }
}