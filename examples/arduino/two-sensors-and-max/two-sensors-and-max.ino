/*
stick an LED into the arduino so that the long leg (+) is in pin 9,
and the short leg (-) is in one of the pins marked GND
this sketch will read one variable coming from max, and send data
from a sensor back to max.
if you want to send more than one variable from max, check out this tutorial:
https://www.arduino.cc/en/Tutorial/ReadASCIIString
here's the max patch (copy the whole thing and then, in max,
paste or do file > new from clipboard. don't worry that it says "max5"):

----------begin_max5_patcher----------
2099.3oc0Z0kaiiiD94jSQA8Rm.3XHR8qWryCy4X6ECnknsYGIQOhRwwyfAX
uC6EXNKyQYOIaUjxN1osSrbaGkoQCGaIRpp9pu5OJ962di2T8yRiG7Of+Eby
M+9s2bi8RzEto6223UJdNqPXrCyyTnxk0dib2R21THaZVuT5VCOO3e2cqk0R
irpQznzU+RsLqwMhj3jwA3+RBGAAwSF6OB7693koJZxVnpluyzXr3sSKhGSy
famGKb2YV0VppPIxJqrtKZT+lU7X97.bJtKpxspid52dHIza6CtVTJaj0+hr
RLsvNK+WVZm1t+Z2r1MLOO5B+ws2ReL5DAyYEZbYONXNB7lJpl+BnNSWWJrP
R7wwJd.ebDBSIgiiw+klfe2hUb96AU6fJww8GU3ehQEFBGW.TIbnPkJ4JT.1
7zajOa0Ku1pkhrGAev+n.lppgvL5OuoKVG.wlrEfb9m8Cf3dWQP3zi9785W.
KhzlKczCVvPE8HSWVJIa6qnDMKjfnddKcSCrPVS+TBqVnxV.K00MvcyT0ll6
AQUNfith9.lJZygZQiDtqr0z.kDDBtEKuUUogLct7d3+8e9u+0etV2BYhJXU
sBm.MH6BKU3WqgoqAE9nIiC9q6DvTP1jcOn2dqYsEEPEBWvcxwyGCslok3pW
9vLFmc+FUpPUIyzsUV8JZq2dUCMSqt9y0JQg2N2Yq4hMNZRDCYwGONYXfkIr
gkaYDIrdP1CRNLY2+pZewvcf7YQ4xB4HPMCHagpxrDULzRnLfyKwZcKz5GAQ
i0BUiAMoYz7EC3+.OBc1cbBbJz8yUkn5NGta4px6ciFzyvkYKAXopZLrwziY
2ywatFdTgeAGXtnQ.O7.TJMFwboYDfnxTYsgdNHu5ITlvaShUtTT.qPxBJMn
rSqY8dzLRgZjh7Qvz1l+5OUPC8zZzPtFDH0gj2tUGLMsyl434H8k3eVNstZO
xqAwDb0jYhVijdrForD4npGkHQ0XfU55GomPob7A4eL1woRwwg1vI7D6eRsL
JVTXe3RwWStzORfyXdzNJWuCbhDsCE2LfOTwMORlzk0XFxMzkGLh0Fu2HYYj
MKRbfyf6G26DkA9CQritvEVeWmeC58I.CVDg7AijLEMRLrgBS.3hL+UOFODs
5e06dXVstbCBMZaf.bRNOJTKbN03E+ZWkIe0CPskBMQNnah3r4IYvms8YgPu
F+HW8jJuEiMzAHisIKzKWpMTdFLPEslG1+bxkN+PP7tELvBRcdAA8vHymLDF
YcsMOf2EOgYDiffvvvcRXhkK1C7HdHvCaRwLcEl.hJ8vRh2jkBtCc.90VMxE
u2wBEXwHRJNTWBFppEhidPRG+ZgwIQNL1B0A8IvBOZHv3bc0WZnbn0qAwTJR
vUkBxNeJX3P.OXTz.LMAFMrqXKgISobk5P0yI.LqDPTqKOjEXqFIHgc1PVvP
.Y+SrVQcUwZ7Cr6hZ8brJAa9Fp9MLkkjvDWaGXAtBnQUh4WL5tRh+BVN3bMU
O6TpA4oxlURoqgE5h6UrIURZqgtLJY1IScmHk1JNyJzlcZwACWPCZpDMaRaN
v4ZZXaVPZsdRkIALZiQLBzTEoqTlWpDckxV.asdEHqq0XErzbnE8aTeWqrdR
TctUqaHaI7SGtgn2XyNBBsF6IQTG87XaeNoI8wjOHUmrOT68tbZFRlQELMXS
gomr9wFlDyK6509zTOm4Kk0esaP5Ksq.ZWAcTiiOITE1Doj5ZHmDR2IhNlL1
nwa7fqgU7+KPuAxYZlxsmD147ks6gPkJ6QazvC4HD9F0oOwgdtxzca3WbufR
10DJ6JB4fDkyqYsNEdR.Qcbcmb71R3GPeOREZrqp9Zc7+gT3tPAAS5uFy8Ff
MoixtY6BqVtTZ64h1S6sNI6lciRtXdztGJnCAl+Qc3ZQCtzUNv7SHLkkxcM.
Y8dBi5i2S5PU4vllSsoTs.8lsKpVMeQWCm6fztlTG415HZxKDOIInmhlgWZl
soJY4A2spOFyQPnycl4Bo45BqeliqZsuGYeUn9sLqKmpKd+RaeCW+9xccaPS
WeTIt2zyt6saltPW6Fq+3fn3z3.5sPlfegmz8RI6ydAOw6ieKqTMZwY.p68l
fNSbsi8EeYw0fuGWSG.b82Jf4051kXDPe+yg0N5Bvbcs31U8GqGIzRtluAtF
874ExSiZc.kK0Y+cYTbsh1qJai+jsow+JJC0ZH3bXIu9kX2KVhCH4AQtsgt2
jjnAvsxHK.61fbtf0nW96Op6U21gDk91H2ABHcjbnAWFjyVjxYFx4GhPwSi1
o5hH+2FWNzKzXnNYDGqoBa+nCPMGtlMC5uOIeP7Isk+lAShOqTccGtj8wrYh
r8r5mIN5dw7IwW8Z2XmSFS6paK4+UGfNqFY2J28rFFrqgrMv1lyRD7hPlKMM
pJ64kamAkr+fVnxykU6hskp7kZzJzIDrzP2dbDu8T7PuG5IrtSzyQtdDq6c7
FMNcywrisaqE4JC4KawL+CR+NY0N9DTa5T0zG0lGxesZymLYLO5vWqScC3cG
4oqjlhNz.6czzWAGeuldgkm2C4iC+vjmImh3v+vDmnSgW9NRydQl14rste7n
KmLGvu.B8ETb9aHDx+anLyh+TY1YetXgrSPZ93hxQOI96kk+hvudcNQea1sP
2gShEaa04U+xUsOK19llr+5JvVOo5b9j4gcJNXQexj4jSPlS+jIyomfLO4Sl
LeJ0sP6HzYEfw0VgX4R57CzslVIAam6aN0z15D5sW49osgFuZ4SpMi29L7D0
XiUMXWUs0ttWdN0s8YdzQsttpUYm8szS9Ot8+C7tvggC
-----------end_max5_patcher-----------

*/


int led = 9; // or any of the pins with the ~ next to them,
             // just change this number to match which pin it's in

int sensor1pin = A0;
int sensor2pin = A5;

// one pin for each sensor
// i like to be specific, and differentiate analog pins by writing A0 or A4 or whatever

void setup() {
  // anything in the "setup" function runs once when the arduino starts up

  pinMode(led, OUTPUT);
  // this tells arduino that you want to send stuff to that pin,
  // rather than read stuff from it (like you would with a sensor or switch)

  pinMode(sensor1pin, INPUT);
  pinMode(sensor2pin, INPUT);
  // this is the opposite -- we want to read something FROM this pin
  // do this twice, once for each sensor pin.

  Serial.begin(9600);
  // this opens arduino's serial port -- the channel of communication with your computer --
  // at a baud rate of whatever is in the ()
  // this needs to match the 2nd argument in the max "serial" object
  // 9600 is standard for an arduino uno, you shouldn't need to change that

  Serial.println("hello world! i'm done setting up.");
  // a nice signal to you, the human, that everything is working so far.
  // once this sketch is uploaded, open the serial monitor (top right of the arduino IDE)
  // and you should see this printed out.
  // It might print halfway, then reset and print fully, that's okay.

} // end of the setup function


void loop() {
  // the "loop" is the guts of the arduino program, it runs continuously over and over again.

  if (Serial.available() > 0) {
    // check to see if anything is in the serial buffer
    // that is, listen to the tin-can phone and see if someone's talking on the other end

    int incoming_data = Serial.read();
    // store the first integer from the data stream in a variable called "incoming_data"
    // you can do this repeatedly for multiple variables – separated by something like a space or comma.
    // that thing that separates data items is often called a "delimiter," so if you see that word,
    // this is what they're referring to.

    analogWrite(led, incoming_data);
    // set the brightness of the LED to match the incoming data (0-255)

  } // end of the if statement

  int sensor1value = analogRead(sensor1pin);
  int sensor2value = analogRead(sensor2pin);
  // read the voltage of each sensor, and store the reading in a variable (one for each sensor)
  // this is OUTSIDE the if statement because you probably will want to read the sensor
  // even if there's nothing coming from max

  Serial.print(sensor1value); // this prints whatever "sensor1value" is currently to the serial line
  Serial.print(" "); // this prints a space -- anything in quotes is printed verbatim
  Serial.print(sensor2value); // this prints whatever's inside sensor2value
  Serial.println(); // this prints a new line
  // try deleting that last line -- the println() -- and see what happens in the serial monitor
  
  // the "println" command sends what's called a "carriage return"
  // it's a leftover from the world of typewriters -- just what it's called
  // when you make a new line and go to the beginning of it.
  // internally, you're sending the ascii code "13" then "10," which is what max is looking for.

  delay(10);
  // hang out for 10ms just so nothing gets overloaded

} // end of the loop
