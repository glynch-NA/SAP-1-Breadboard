# Arduino Control Augmentation

Just after hooking up all the control lines to their corresponding LED on the first half of the control module, I wanted to make debugging a bit easier than manually changing each jumper cable from low to high. To do this I used an extra arduino nano as a data enable/disable and attached each control line jumper up to it.

Using the serial interface in the Arduino IDE you are able to control the digital I/O pins on the nano by typing the letter or characters of the control line you wish to enable/disable. By doing so you can debug efficiently and test each individual operation.

The code is listed [here](arduino_control_code.ino). 
