![Project Screenshot](Images/Overview.jpg)

# SAP-1-Breadboard
Based on Ben Eater's video series on YouTube & the schematics available on his website https://eater.net/8bit, this 8-bit SAP (Simple As Possible) breadboard computer project was a colorful introduction to basic computer architecture. 

Built almost entirely using logic ICs, with some more complex components and additions, the 8-bit breadboard CPU demands a resilient mindset in order to complete. There are many setbacks and unexpected issues that arise from the physical implementation of a great number of individual components. These problems range from diagnosing faulty hardware to unpredictable behaviors of certain components due to the breadboard environment. 

My goal with this documentation is to share the insights I gained and where I found solutions to problems which were beyond my expertise. 

## Overview
The computer is able to be programmed manually through the MAR and RAM modules using dip switches, where microcode instructions are inputted into locations within memory which the computer then advances through. The control logic of the computer uses two AT28C64B EEPROMs that are programmed using a homemade Arduino Nano EEPROM programmer. The EEPROMs translate what is stored in RAM to instructions that the computer then runs through. 

### Modules
-**Clock** - Adjustable/manual timing control.

-**Memory Address Register** - Selects memory location from bus or manually.

-**Random Access Memory** - Program and data storage. Can be programmed manually.

-**Instruction Register** - Instruction storage from bus to control logic. 

-**Control Logic** - Instruction interpretation and sequence counter. Displays what control words are in use. 

-**Program counter** - Displays where in the program the the computer is and what to execute next.

-**A Register** - Storage of an 8-bit value for ALU use or immediate access.

-**ALU** - Performs addition and subtraction operations using A and B registers.

-**B Register** - Stores an 8-bit value for use in the ALU.

-**Display** - Is able to output the value on the bus to 7-segment displays. 

<u>NOTE</u>: I unfortunately was unable to construct the flags register and subsequent opcode due to a supply mishap. Thus the computer I built cannot be considered 'Turing Complete' since it cannot preform conditional jump operations.  

## Instructions
