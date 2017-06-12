# VERONICA MK VIII
## ROBOTIC HAND (ARDUINO PROJECT)
[WATCH IT IN MOTION HERE!!!!](https://www.youtube.com/watch?v=lwFDNPkSpyk)

![CoverPhoto1](https://github.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/blob/master/README%20photos/firstCover.jpg?raw=true)
![CoverPhoto2](https://github.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/blob/master/README%20photos/secondCover.jpg?raw=true)

This project was also a school project I did on my own a few months ago. It uses Arduino to control some servo motors attached to some string in order to move the articulations from the fingers of a rigged hand skeleton I made. It is controled by a human using a glove with five sensors.
It is a simple project even tough it looks difficult. The tricky part was to make the hand look good and sthetic.
Let's beggin.

I did lots of tests before the final product because I didn't have all of the materials from the beggining. 
[CLICK HERE TO SEE VIDEOS AND IMAGES OF THE JOURNEY MAKING VERONICA](https://drive.google.com/open?id=0BwWofzZMwB7DdnljaHd4RVdza2c)

---
### BUILDING THE SKELETON
![Hand](https://github.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/blob/master/README%20photos/Captura%20de%20pantalla%202016-12-22%20a%20la(s)%2014.02.22.png)

We used DAS plastiline to make the bones, straws and moldable plastiline for each finger, acrilic for the platforms where the motors and arduino stay in place and lots of super glue.

---
### PROTOTYPING
![Prototypes](https://raw.githubusercontent.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/master/README%20photos/Captura%20de%20pantalla%202016-12-22%20a%20la(s)%2014.03.19.png)

**FIRST ATTEMPT | OneFingeredRobot (MK I - II)**
At first I just had an Arduino UNO and a single servo so I started building a one fingered robot (haha). I didn't have any sensors for the finger we needed to control so I put on some gloves and covered them with aluminum on the tip of the fingers and on the palm in order to close a circuit whenever pressed the palm with one finger.(See photo above)
VERONICA's finger could just go from fully extended to fully contract but it worked like a charm.
I just had one problem configurating the sensitivity of the sensor, that is why I passed trough 3 versions of VERONICA to get it just right. (I was just a starting noobie)

**SECOND ATTEMPT | TwoStateWrist (MK III)**
I got crazy and started thinking about adding a wrist movement to VERONICA.I had a two state switch that sensed when the switch was upside down or on his normal state so the wrist could only move from 0º to 180º. It was the simplest of things to get done, the code was easier than I tought, I attached one perpendicular servo to VERONICA'S wrist and the switch to the operator's hand as if it was a Bracelet. That was it.

**THIRD ATTEMPT | MrPotatoHead-ArmBluetooth (MK IV - V)**
My Idea was to build a robotic hand that could move it's five fingers and it's wrist (x and Y axis) so I bought a Bluetooth module to get values from an smartphone's gyroscope attached to the human operator. The code was a little bit trickier but I used a framework built by somebody else to get it done (I wish I knew it's name). 
I attached a Mr Potato Head arm to one servo and this srvo to another servo in a perpendicular manner as an elbow and wrist to test the code out and it looked great. (see photo above).

**FOURTH ATTEMPT | CleanCircuits (MK VI)**
All of the materials I needed arrived and I finished building the final plastiline skeleton. I just assmebled all the servomotors to each of VERONICA's fingers, I pasted all of the pieces together, I made the glove and pasted each sensor to the fingers of the operating glove, I solderd two PCVs to make the circuit look nicer on VERONICA.

**FIFTH ATTEMPT | FailingWrist (MK VII)**
When I was trying to test the servos that made the wrist moves on VERONICA it broke... Yeah, it broke even tough It was even more powerfull than the other servos. I tried to fix it but it was impossible so I had to quit thinking about wrist movments. I just had the finger movement left.
LESSON: Always think before ordering servos. Messure the strength and weight they need to carry. Don't be a fool like me.

**FINAL ATTEMPT | CleanCode-Presentation (MK VIII)**
On this attempt I just cleaned the code and documented it. The day after that I presented my project to the public (my school). They loved it, it was the best project out there, it helped my assignature get more students for next year (The sad thing about this is that they didnot taught me the things that I built, I did it on y own wuth Internet).
It was my greatest Arduino project.




******
**VERONICA's final cost was around $96.3 USD ($2000 mexican pesos).**

******

**BUILT AND PROGRAMMED BY EMILIANO CARRILLO MONCAYO. 2016.**


I also made the logo of the Tees we were wearing on the presentation. It is a LED made with pure geometric shapes and two triangle outlines in the background. The LED on the TeeShirt lit whenever it was dark. IT WAS AWESOME.
![LOGO](https://raw.githubusercontent.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/master/README%20photos/Captura%20de%20pantalla%202016-12-22%20a%20la(s)%2015.38.48.png)

![Oficial B](https://raw.githubusercontent.com/emiliano-carrillo/Veronica.RoboticHand.-ArduinoProject/master/README%20photos/Captura%20de%20pantalla%202016-12-22%20a%20la(s)%2014.02.03.png)
