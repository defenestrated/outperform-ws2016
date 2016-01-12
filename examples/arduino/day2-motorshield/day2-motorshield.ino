/*
this is sam's example for using the the Adafruit Motor Shield v2
---->	http://www.adafruit.com/products/1438

a brief description of what you need to make a DC (Direct Current) motor spin
is available here: https://learn.adafruit.com/adafruit-motor-shield-v2-for-arduino/using-dc-motors

i've tried to pare this down to the bare minimum, so you should add things,
modify whatever you need, etc.
*/

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

// make a variable for the motorshield -- you could call this
// "driver" or "bobby" or "theBrainsThatMakeTheThingSpin", it's just
// a name, like the variable we made in the first class for an LED pin.
// that said, why not make it something that describes what it actually
// is in the real world -- an AdaFruit Motor Shield, or AFMS:
Adafruit_MotorShield AFMS = Adafruit_MotorShield();



// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);

// if you wanted TWO motors, you could put another one in M2,
// and you'd need to make a variable for that one as well
// called something different, like this:
// Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);

// note the * at the beginning of a variable. don't worry about what
// it means, that's specific to this language (which is called "C")
// just know that if you need more motors, their names have to start
// with a *. i can try to explain if you're interested...

void setup() {

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz

  // sam's note: unless you know you need something different, just do begin().


  // that's all you need! now, it's up to you.

  // one option is to set the speed of the motor once, at the beginning:
  myMotor->setSpeed(255);
  // then you have to actually turn on the motor and pick a direction:
  myMotor->run(FORWARD);

  // this is enough -- if you delete everything in the "loop," this will
  // turn on the motor at whatever speed is in the (...) after setSpeed
}



void loop() {

  // to ramp the speed, you'll need a variable that can change --
  // so, make an integer, call it "counter," and start it at 0:
  int counter = 0;

  // start by spinning the motor "forward"
  // note that arduino doesn't care which way you wire the motor, so
  // if you flip which wire goes in which screw terminal, "forward" will
  // mean the opposite direction:
  myMotor->run(FORWARD);


  // here's that "for loop" again.
  // make sure counter starts at 0
  // then, as long as it's less than 255, do the loop
  // lastly, at the end of the loop, add 1 to "counter"
  // "++" is called an "increment" -- it's a shorthand for saying
  // counter += 1, or counter = counter + 1.
  // they all mean exactly the same: take whatever it is now, and add 1 to it.
  for (counter = 0; counter < 255; counter ++) {

    // so, each time through the loop, set the speed to whatever the counter is now:
    myMotor->setSpeed(counter);

    // then, wait a bit, because we're dealing now with mechanical things
    // so you can't just instantly snap from one speed to another;
    // you have to wait for the motor to catch up!
    delay(100);

    // just to recap: this delay also happens in every loop cycle
    // so a 100ms delay, looped 255 times, means that it will take
    // 100 x 255 = 25,500ms or 25.5 seconds for the motor to reach top speed.
  }


  // this is in the adafruit example too -- a ramp the other way.
  // it's exactly the same concept (a for loop), but in this case
  // instead of starting the counter at 0 and *incrementing*
  // we're starting the counter at 255 and *decrementing,* or
  // in english, subtracting one from the counter as long as it's greater than 0
  // same as before, "counter --" = "counter -= 1" = "counter = counter - 1"
 for (counter = 255; counter < 0; counter --) {
   myMotor->setSpeed(counter);
   delay(10);
 }

 // see if you can get it to then go the other direction
 // (hint, start with myMotor->run... )

 delay(1000);
 // wait a little while just so you can see where the loop ends... this is unnecessary, technically =)
}
