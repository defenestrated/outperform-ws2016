// this sketch blinks an led on a pin we're calling "maggie"
// in this case it's pin 13
// anything followed by two slashes is ignored -- it's called a "comment"

/*
  you can also do comments like this,
  which allow for multiple lines within one comment
*/

int maggie = 13;
/*
   here we're making a variable named "maggie."
   it's an integer, or "int" for short, which means that it has to be a whole number -- no decimal places.
   then, by saying maggie = 13, that means maggie now holds the number 13.
   so in the future, anytime we say "maggie," arduino sees the *value* held by the variable "maggie" -- in this case, the number 13.
*/

int ontime = 100;
int offtime = 250;
/*
   same thing for "ontime" and "offtime" -- note that you can't have spaces in variable or function names.
*/


void setup() {
  /*
     "setup" runs once when arduino starts up. it's a good place to, well, set everything up.
     don't worry about the "void" part, we'll get into that later.

     first, you need to use the function "pinMode": this lets you decide whether a certain pin will be used for input or output -- meaning, whether you are asking it for data (whether a button is pressed, for example), or sending out data (like turning on an LED).
  */

  pinMode(maggie, OUTPUT);
  /*
     the syntax of pinMode (syntax is the format you need to use to get a piece of code to work) is:
     pinMode([which pin], [which mode]);
     so in our case, we want to set the pin (maggie) to be an OUTPUT pin.
  */

  // now that it's set, you can tell it to be HIGH or LOW with "digitalWrite."
  // this turns the pin off initially:
  digitalWrite(maggie, LOW);

}

void loop() {
  // after the setup finishes, "loop" runs continuously over and over again.


  // so to blink an led, you want to:
  // turn the led on
  // wait
  // turn it off
  // wait
  // repeat:

  digitalWrite(maggie, HIGH);
  // set the "maggie" pin (13) high
  delay(ontime);
  // wait the number of milliseconds stored in "ontime" -- 100, or 1/10th of a second
  digitalWrite(maggie, LOW);
  // set the "maggie" pin low
  delay(offtime);
  // wait the # of ms stored in "offtime" -- 250



} // this is the end of the loop, at which point arduino goes back and does it again.
