int maggie = 13;
int ontime = 100;
int offtime = 250;

void setup() {

  pinMode(maggie, OUTPUT);
  // setup where the led is

  // turn everything off
  digitalWrite(maggie, LOW);

}

void loop() {
  // turn the led on

  for (int index = 0; index < 3; index += 1) {
    //make a variable (an integer) called index and set it to zero
    //as long as it's less than 3, do the stuff in the loop
    //after each loop, add 1 to "index"

    if (index == 0) {
//       stuff you're doing if the condition is true
        digitalWrite(maggie, HIGH);
        delay(ontime);
        digitalWrite(maggie, LOW);
        delay(offtime);
        delay(1000);
      }

      else {
        // this stuff happens if index is NOT equal to 0
        digitalWrite(maggie, HIGH);
        delay(ontime*3);
        digitalWrite(maggie, LOW);
        delay(offtime*4);
        
      }
    
  }

  delay(3000);



}
