int maggie = 11;
int ontime = 100;
int offtime = 100;

void setup() {

  pinMode(maggie, OUTPUT);
  // setup where the led is

  // turn everything off
  digitalWrite(maggie, LOW);

}

void loop() {
  // turn the led on

  for (int index = 0; index < 255; index += 1) {
    //make a variable (an integer) called index and set it to zero
    //as long as it's less than 255, do the stuff in the loop
    //after each loop, add 1 to "index"
    
        analogWrite(maggie, index); 
        // use whatever the value stored in "index" is at this point for the brightness
        // try doing (255-index) instead of just "index"
        
        delay(10);
        // wait 10 milliseconds just so you can see the fade
        // (try changing this and see what happens)
  }

  analogWrite(maggie, 0);
  delay(3000);



}
