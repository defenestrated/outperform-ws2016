/*

stick an LED into the arduino so that the long leg (+) is in pin 9,
and the short leg (-) is in one of the pins marked GND

this sketch will read one variable coming from max, and send data
from a sensor back to max.

if you want to send more than one variable from max, check out this tutorial:
https://www.arduino.cc/en/Tutorial/ReadASCIIString

here's the max patch (copy the whole thing and then, in max,
do file > new from clipboard):

----------begin_max5_patcher----------
1884.3oc0Z0kiiaiD94tOED5koMfaCQ8uC1cAxYHOtSP.sMsMmQRzQjpc6DD
f8NrWf8rjiRNIophRSqdFaOZTKYLKZ.aQJJpp9p+9J592u+NuU5mkFO1Ov92
r6t62u+t6novItqY7cdEhmWmKLzx7VqKJjkVu4t6YkOao4s6kLQ0tZ7lF1dY
ENTxNtWsdO6ftxxdXqpxXmwDkaXvpKwOXqD0aXUBqj8PQswxJDVX8tMaSspT
yVq2Hmw9q+y+8O+emz0r0hR1wJE7.3hnMVpfKqXqNwTvqNWZsvnGDrULoc8L
l9S2ZacdNqTT.uL4hcKX0lUEvtW73Vd.eVqJkqJkq00kjdE2L4VMnVpeShyw
4KhWFyyRat2ATlUk69kJ4ZqCKChBW3OmEjrj9JvG+Jkuvm8yMOTYcgpDjUBU
4uLot11NqeyrF6ob5E60JhpMzP8pO7XXpWGQDUN5V+XkRj6g23Ot+d7i4uQ6
6V.FkOKJNjKmyTu6IIfdRxPxTklCflCKvBlq8hxcNiSEckdKLPYXlb0FIsD+
GChim23Z.2AW6FUAfG6XOb3XwrWdRvX25GbPUdVKTzksBwowHtyWlPVgnL7q
D+ovJjLDr1AIdWVAR4jiSPpyahFvi9pJvAQE3G.QA+hrTrxI09mU438R4BZm
rMB.reKZ2P2tYOcP5jYOO1OO.rnTdDdWega2gJUos0G3Qi3j4JvEOlLzIbmY
22Y1ClB6s+XFao1xvTaFIjYzXq2tEBoXBl4fXs7QiDMmVHVKWAIHcYtduGOH
BbHXAgKhgrs44PX068lw1VoKZgq4r1DlvNXf3TKCzS1QHcIFXUWB6+GoT0mM
vJbfo9VR47hih6DzgCFciPvxwM02EbAavIe7uELCy+ZdfYYcTdtevP7.i6kx
m4co.PE5h8ou1lqEzEsyMnvyK45hI8gr6dCzWIlSdGQQcJSxWNE9JI2lxjTo
t05xmjUHgCJZjUHMFATP6AHr9Wq0VoYFDgCUBEXQTLCMCToUP0Q.Nwn7yFOF
71vXWsvf.BpCmhjhAw2FLdit7cPZLcU0IlXElRaDbA4SuKXzsAdfZCgPpm26
0xsRXVqTDOZFxhSvfDcLz0pCGri6EV7agkdDrRDP+RBtwmfhM+jDExETw37x
GlA6Mn8G.jua8lQsJhi.cXri.cTxzUEI71XV9GO9HSWleB9.5aoRuC3nQEmg
T.XwdBhcMz.FAAypJ.CjQybrCdGzL0NMRQdEVMZkzdTJcsBgS1saIpCqZCNM
HYzCi88HQ55vJx0lNMOAojvEsRBtFRhvvNMtr1MD2qmTqkLvUvHlyzXuVGUl
WZP6nB1c69J8QlrpRWYnmA2zOfczcjhV2f6zIKZkY+yy2pUxk8FBinfzkwKh
wlpHWirzovYXT408Zn9JzFBBI2bNj8ATvrOw1ez0O9xwT+zGZ5huepmy7kwm
NsKcL0tlVObztwdQeRnxoh0n5ZvfDT2QGcnfuQmKee4CGUkaf.g+U2omc0Di
miE4xTBiHtj7XeW86o.v3CAvZnybV2gqwMdoKHND8BBSuNy3fg2tJOwabaM8
R5KEd+0U3ln5vkSmFGLxZ70pgQcoJfpPPl7lPft0tbTFB8Kn.Dg4iD0h2YvB
MJ6XRQfyIbkmQMYwS3SFEAd1sihPaK6TsSBqcsFXXUpc6st9F5.5f7AHxb2I
phO7dwSRD5c87CSWPmlv3SQKLxECy4cXNOM3ezMoQejKq4TwJc9.6kn47mZZ
0J0c1ceiG5auB3u1Aezbm05bckSr7WDFmjkDNGtJEtHHEuBiY5HZS6w3orZw
aDTcmQfqQfKCpgCGTytAf5fO+kKfq+VNaWkt9.zumu+aDfcc.2POi+sUlJnO
.b5WGf+Ruv4C0Szp2sK+ZkmyblKW4CW1qfa8Qqm3cq7T9UPpqzPg4A5k3Pqf
.hEiqCruUmjdgHwCvIA4hLpfkQlynCQ4sERElRASwYCImUXePqnghVye46Ah
bDqjgdnaYwcnND2yBk8O1qWoiBGX5ng6scoFInNMeatZADWrvoKtLXHn03FS
R7c2xVl75RcaEqekqv.AP2OUeZzPHs0K+M9MhewWDRSKmn7+Y+mdPnAN+qsF
Fcc051cr8G.l8xacizXUkBqRW1YQ7Wsl8pMajkcMKEpMGzf7YZ+osWhcu0v5
HNIsCGjlQAItRyMUne8H24CySbGIHN5E4SYvzCDx6eVGv9p3K6gdiUTuphea
EG72Er2hC+MINY8PbV9UjlW4w6OuyG7Iwhl1CYN66LYNoGxb72Yxb7Hjw3VK
yQ8PlS+NTlCtIx7mk+NvOhxe69mrgm392730ibz6ZxQSil.DH7+C8zBtYx7m
Y0ZrEMFnjtVqjFZPotezgvyMJpaMWbzDfM7jwmrQfu6nh4ocT6tC9NPsClN0
tw.G10Z6Ts33tpVb7znZ8PyhFHIJG2VwgC3OOcyVRBBzSwGbwGD2e.ZJcCIF
7dUxmTsqmdGdhJny.KzVPckiY9yYtSmwC+eDtprV0vXBdy+w8+MvP635A
-----------end_max5_patcher-----------

*/

int led = 9; // or any of the pins with the ~ next to them,
             // just change this number to match which pin it's in

int sensor = A0;
// i like to be specific, and differentiate analog pins by writing A0 or A4 or whatever

void setup() {
  // anything in the "setup" function runs once when the arduino starts up

  pinMode(led, OUTPUT);
  // this tells arduino that you want to send stuff to that pin,
  // rather than read stuff from it (like you would with a sensor or switch)

  pinMode(sensor, INPUT);
  // this is the opposite -- we want to read something FROM this pin

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
    // that is, if max has sent anything

    int incoming_data = Serial.read();
    // store the first integer from the data stream in a variable called "incoming_data"

    analogWrite(led, incoming_data);
    // set the brightness of the LED to match the incoming data (0-255)

  } // end of the if statement

  int sensorValue = analogRead(sensor);
  // read the voltage of your sensor, and store it in "sensorValue"
  // this is OUTSIDE the if statement because you probably will want to read the sensor
  // even if there's nothing coming from max

  Serial.println(sensorValue);
  // send the sensor value out the serial port, followed by a "carriage return"
  // that's a leftover from the world of typewriters, it's just what it's called
  // when you make a new line and go to the beginning of it.
  // the ascii code is 13 10, which you'll need to look for in max.

  delay(10);
  // hang out for 10ms to let the serial buffer catch up

} // end of the loop
