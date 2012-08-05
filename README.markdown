#homemade breathalyzer

A simple arduino project that can be completed in a few hours.


##PARTS REQUIRED
-arduino
-breadboard
-wires and stuff
-1 10K ohm resistor
-1 RGB LED for feedback
-1 MQ-3 Gas sensor from sparkfun or wherever

#SEE breathalyzerSchematic.png for a wiring diagram

hook up all the wires and run this sketch.

I'm having a slight bit of trouble getting the sensor to give an absolute reading for zero, this isn't extermely accurate yet. I also haven't tested the upper bounds, this is no good for measuring an actual BAC. yet.

When you run the sketch it starts out with a baseline reading of ~500. You'll see the sensor start to calibrate itself as it lowers it's baseline. The LED will start yellow/orange, progress to a red, and finally blink red/green a few times before finally settling in on green. When it stops blinking you're ready to play. Blow into the sensor and watch the LED's color change. Green means you're good to drive. As you get drunker it shifts hue to more of a yellow and finally a deep red. Don't drink and drive, and have fun experimenting!
