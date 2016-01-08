// this example shows a nested loop -- a loop within a loop.
// it uses what's called a "for loop" to do something repeatedly a set number of times within the larger loop.
// more on for loops here: https://www.arduino.cc/en/Reference/For

int maggie = 13;
int ontime = 100;
int offtime = 250;

void setup() {

  // set the LED to be output
  pinMode(maggie, OUTPUT);

  // turn everything off
  digitalWrite(maggie, LOW);

}

void loop() {

  // a "for loop" is an iterative structure: it allows you to do something a set number of times, keeping track of which time through you're on. they're especially useful for nesting within other loops, like this.
  for (int index = 0; index < 3; index += 1) {
    //make a variable (an integer) called "index" and set it to zero
    //as long as it's less than 3, do the stuff in the loop
    //after each loop, add 1 to whatever "index" is at that point

    if (index == 0) {
      // an "if statement" is a way to do something only if a certain condition is met
      // in this case, if the "index" variable is equal to 0
      // or in english, if this is the first time through our "for loop"
      digitalWrite(maggie, HIGH); // turn it on
      delay(ontime); // wait "ontime" number of ms
      digitalWrite(maggie, LOW); // turn it off
      delay(offtime); // wait "offtime" number of ms
    } // end of the "if"

    else {
      // this stuff happens if index is NOT equal to 0
      // i.e. the 2nd and 3rd times through the loop, when index == 1 and index == 2 respectively
      digitalWrite(maggie, HIGH); // turn on
      delay(ontime*3); // wait for three times the "ontime" amount
      digitalWrite(maggie, LOW); // turn off
      delay(offtime*4); // wait for four times the "offtime" amount
    } // end of the "else"

  }

  delay(3000); // wait three whole seconds between cycles



}
