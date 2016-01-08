/* this sketch shows how to fade an led, */
/* using "analogWrite" or Pulse Width Modulation (PWM) */

int maggie = 11;
/* for anything that's not simple on/off switching,  */
/* we need to use one of the "pwm" pins, designated on the arduino board with a ~ */
int ontime = 100;
int offtime = 100;

void setup() { // start of the setup

  // set the LED to be output
  pinMode(maggie, OUTPUT);

  // turn everything off
  digitalWrite(maggie, LOW);

} // end of the setup

void loop() { // start of the loop

  for (int index = 0; index < 255; index += 1) {
    /* make a variable (an integer) called index and set it to zero */
    /* as long as it's less than 255, do the stuff in the loop */
    /* after each loop, add 1 to "index" */

    /* the result is a cycle in which a variable called "index" ramps up from 0 to 255, */
    /* then pops back to 0 and does it again. */

    analogWrite(maggie, index);
    /* use whatever the value stored in "index" is at this point for the brightness */
    /* so it'll be 0 at first, then 1, 2, 3, ... 102, 103, 104 ... 253, 254, and finally 255 */

    /* try doing (255-index) instead of just "index", and see what happens =) */

    delay(10);
    /* wait 10 milliseconds just so you can see the fade */
    /* (try changing this number and see what happens) */
  }

  /* just to make the behavior more obvious visually, */
  /* turn the LED off as soon as the "for loop" finishes */
  /* i.e. as soon as it gets all the way to 255: */
  analogWrite(maggie, 0);

  delay(3000); // wait 3 full seconds before doing it all again

} // end of the loop
