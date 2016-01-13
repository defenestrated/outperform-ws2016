/*
 Two analog inputs (sensors), two analog outputs (a servo and an LED)

 To make this sketch work, you'll need to connect:
 - some kind of analog input (like a knob or light sensor) in A0
 - another kind of analog input in A5
 - a servo with the yellow wire (data) connected to pin 9
 - an LED with the long leg in pin 11, short leg in ground
 **   if you want to preserve the life of your LED,
 **   add a 220ohm resistor between the short leg and ground
 **   i use this widget to figure out the right colors:
 **   http://www.zambetti.com/projects/resistulator
*/

// include the servo library:
#include <Servo.h>

// create a servo variable that you can reference later
// give it a name, like "myservo"
Servo myservo;

// if you had two servos, you could add another one by doing:
// Servo myOtherServo;

// as before, set up the pins first -- which wires are going where:
int potpin = A0; // which pin is the potentiometer's yellow wire in?
int lightsensorpin = A5; // which pin is the other sensor in?
int LEDpin = 11;
int servopin = 9;

// then, you'll need variables to store data in:
int potReading;    // this one's for the "pot"
int lightReading;  // this one's for the light sensor

// for clarity's sake, i'll do two extra: the final values to send to the servo + led:
int finalServoValue;
int finalLEDValue;

void setup() {
  // set up your servo just like in the example, using the variable you made for the pin:
  myservo.attach(servopin);

  // then you also need to set the mode for the pins you're using -- which are input / output:
  pinMode(potpin, INPUT);
  pinMode(lightsensorpin, INPUT);
  pinMode(LEDpin, OUTPUT);
  pinMode(servopin, OUTPUT);

}

void loop() {
  // the goal for this example is to use the knob to control the LED,
  // and the light sensor to control the servo.

  // first, you'll need to ask the arduino what it's seeing from the sensors,
  // and store that number in the respective "reading" variables:
  potReading = analogRead(potpin); // reads the value of the potentiometer (value between 0 and 1023)
  lightReading = analogRead(lightsensorpin); // same here -- a number between 0 and 1023

  // so, now we have two numbers between 0 and 1023
  // all that's left is "mapping" those numbers to be:
  // between 0 and 255 for the LED (or motor on your motorshield, etc.)
  // between 0 and 180 for the servo:
  finalLEDValue = map(potReading, 0, 1023, 0, 255); // 255 for the LED
  finalServoValue = map(potReading, 0, 1023, 0, 180);  // 180 for the servo

  analogWrite(LEDpin, finalLEDValue);  // use "analogWrite" to set the brightness of the LED
  myservo.write(finalServoValue);      // "myservo.write" sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
