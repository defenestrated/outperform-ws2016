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
1998.3oc0Z0saqiaD95jmBBcSb.bLD0+tns.8YnW1yhEz1z17rRhdEohi2EK
PeG5KPeV5iReR5LCkOQ9DaGcTjLRQ.hMoonle9lY9FJ862em2B8KRiG6Ow9G
r6t62u+t6novItqY7cdEhWVlKLzx7VpKJjkVuoteyJewRya2pLLStZkrhsWk
myJzOKguY2xNnqqXFYoQWwlTpsRlcqvxTO.KX4VQ4F4JXFIqB+JypYKjL+m3
9AgSwQEB6xszBDUqpUk5GLLQoHWugoJcWziGEmbUobottjjo3lI2UIg6tUXU
5xetRtz5z234ym4OkEGGhe327O1O0bUq0kVi52j3h47Ywyi4YoG2QTjTkaZu
aozNDmFgevSnQo7VaXYcgpLWZI6H+0I001iy52LqwdHmtwdGUL0JZndwWehG
60RDKEEtU92pThbO7G9i6uG+2zN5QcNMu2W0BZqZQgumpsSTAxlUV8yxRwBm
93eV0l2I0N73jeyq.HjYG2Q21YOrS5DZOO1O0Ciwkg2H7aSM9iF1VYENDv2a
U.1bmtxxlrVUYrOBPSBMWRH1Eh5U.DEf7SJpM12hkYK0qjOx9u+y+0+4eCwI
rkhR19JEEiHcarDhgffpEGXJ3ViJILZhfsfIsKejo+1OstFB6P7.ahb1lYrZ
yhBX2KdZMOfe8PjePvdPDEyDjPQPAAiGXOLcXA6Wx+tFLixWDE6xkScYlpMM
okTklcflCK.RF4xW0JckdMqcpOXI9OEDGOsAZ.+Bt1UpBvdrgMY29hGe8JAm
8QbvNU4Y8PQWKtLlBHmmPdgnL7iD+wvKjLJIVR49NXDkXwgh3Q923DKgAeeh
Ev+Mz4UJk6g60afc6pTk1iXfmLhClqXt3wjiNg6b69N2dvX3u8GxXK0ZjB.x
.XEyXqWuFqaKXlchkxmLRzcZgXsbEjfzk45Kd7fH.PvfD7wP117bHr5KdOxV
WoKNZtlxNlvD1ACDmZYfd5nb.SVWB6+uPopOafUXOS80vZHJtUPGNXvcBAyG
1TeW.B1Xm7w+lwLL+qg.yxZo7P829f.i6jxm4co.PEBw91Gqy0B5KGmaPK6i
I8gr6d8DqDyIzQTTqxj74iAVI41TljJ0sTW9rrBIbPQirBowHfBZSfv5esF3
2adDhvgJgBrHJlglApzBn5HXNwn7yFOF7wrwtZgANNpgiQRwf3aiMdkt7AHM
ltp5.Sr.SoM.PP93CAitMlGn1PHj54KdG4VILKUJhGMCYwIXPhNFBsZwAaO0
vIz2nktDrRDP+RBv3CPwl+tDExYTw37xIOB6Mn86.Ke65MCZUDGA5vXGA5nj
wqJR3sws7me5IltL+.7OnukJ8FfiFUbFRAfE6ISrqgFvIHXVUA3fLZlicvCP
yTazHE4EX0nER6doz0JDNY6tknNrpM3zfjQWL12iDoqCqHWaZ07DjRBWzBI.
MjDggMZbYG2PbudVsTx.nfQLkowds1qLu1fFcXF1sU58LYUktxPWCtoeE6na
OEstB2oCVzKy9KmuUqjKiFBinfz4wyhQ1vDzHKcL.CCJutSM0Wg1PPHAy4P1
GPAyBOx1e3OZj4Co9o20zEe2TOm6KiOdZW5PpcMsd3nci8h9rPkSEqQ00fAI
nti.cnfuQmK+R4j8pxUPfves8zOd0DimiE47TxFQbI4wtiSZLf6bdeLXMzYN
Kb3Zbim6BhCQTPX50YFG7ANGrDugs0zKouT386qvMQ0gyGOMNv61bHeXMLpK
UATEBxj2DBzt1kixPneAEfHL+BQs3ACVnQYGRJBbNYW4YAtSckOZTD3Y2NJB
GaYmpcR1ZWqAFVkZyVqqugVFcP9.KxT2IphW7VwyzyHv0yOLcAcZBCOEsvHW
LLm2h473X+itIM5ibYMGJVny6YuDMm+TSqVtGJPvO3g91o.9qcvGM+xRcttx
IV9yBiSxRBwGeSJ7kfzlmlSaQabOFOkUK9fFU2YD3ZD3xF0v9aTytAF0de9K
Wvt9a4rMU55cP+d99ePCrqC3F5Y7erxTAcw.m99F32hBm1WjnUuYS90JOm4b
WtxGtrWA25iVOw6VgT9UPpqzPg4dhRbVqf.hEiqCreTPRmrHw8.jfbQFTikQ
lynCQ4iERElRASwY8ImUXWrVQ80ZM80O6okiXkz2CcKKtE0g3NVnr6wdcJcT
XOSG0ez1kZjf5z7iA0BHtXgiWbYPerVCaLIw2cIadxok5VKVdBTnmFP2ipOM
oOj15Ddiei3W7lPZZ4Dk+u6EYhrF37m5ML55pkG2wF5lrWuoqjFqpjdYgZsF
7sOo0h1pVsRV11srRYvfVxd3eVXQWEGdGDmnamzDzEqy6HNEpU6zfyqwAE36
ZsMI60psmLv8.3g4bmHZb6ttFPUKY7TMNkvJgB2NYPPRp6XuBO2nn1pMNZDT
6gvgdRjbq2dtSie+NaSidczSmz1s+Iw1DdyrMCmLG++gxb3HjUIkOGgFMM5E
6POmNJHw0MTSSQmNJJrM.6j2uwgSw6RsFrIlaT18tHN3qhQmEG9GRbx5f3L+
SFTNsCxb1mLYtKE9h+jIyQcPlS+DJyA2DY9MzPhnbg9sKx9cibcm1juiF8tV
.GUawtc3SKuQMHkGZw4qNojZEADmR2PpgBuJ4ypiqmzKOQEznhE5Rotx0nvK
YtCKxCekkqJqUMYSf67eb++CfDMne
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
