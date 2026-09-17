![Project Screenshot](Images/Overview.jpg)

# SAP-1-Breadboard
Based on Ben Eater's video series on YouTube & the schematics available on his website https://eater.net/8bit, this 8-bit SAP (Simple As Possible) breadboard computer project was a colorful introduction to basic computer architecture. 

Built almost entirely using logic ICs, with some more complex components and additions, the 8-bit breadboard CPU demands a resilient mindset in order to complete. There are many setbacks and unexpected issues that arise from the physical implementation of a great number of individual components. These problems range from diagnosing faulty hardware to unpredictable behaviors of certain components due to the breadboard environment. 

My goal with this documentation is to share the insights I gained and where I found solutions to problems which were beyond my expertise. 

## Overview
The computer is able to be programmed manually through the MAR and RAM modules using dip switches, where binary instructions are input to locations within memory which the computer then advances through. The control logic of the computer uses two AT28C64B EEPROMs that are programmed using a homemade Arduino Nano EEPROM programmer. The EEPROMs translate the binary instruction that is stored in RAM to microcode that the control logic then runs through. 

### Modules
- **Clock** - Adjustable/manual timing control.
- **Memory Address Register** - Selects memory location from bus or manually.
- **Random Access Memory** - Program and data storage. Can be programmed manually.
- **Instruction Register** - Instruction storage from bus to control logic. 
- **Control Logic** - Instruction interpretation and sequence counter. Displays what control words are in use. 
- **Program counter** - Displays where in the program the computer is and what to execute next.
- **A Register** - Storage of an 8-bit value for ALU use or immediate access.
- **ALU** - Performs addition and subtraction operations using A and B registers.
- **B Register** - Stores an 8-bit value for use in the ALU.
- **Display** - Is able to output the value on the bus to 7-segment displays. 

## Control Lines
- **HLT** - Halt - Stops the system clock. 
- **MI** - MAR In - Accepts a 4-bit piece of data from the first four bits of the bus into the MAR.
- **RI** - RAM In - Stores the contents of the bus in memory.
- **RO** - RAM Out - Outputs the data in memory to the bus.
- **IO** - Instruction register Out - Outputs the contents of the first four bits of the instruction register to the bus.
- **II** - Instruction register In - Reads the contents of the bus into the instruction register.
- **AI** - A register In - Stores the contents of the bus into the A register.
- **AO** - A register Out - Outputs the contents of the A register to the bus.
- **EO** - Sum Out - Outputs the contents of the ALU to the bus.
- **SU** - Subtract - Enables the subtraction operation in the ALU.
- **BI** - B register In - Stores the contents of the bus into the B register.
- **BO** - B register Out - Outputs the contents of the B register to the bus.
- **OI** - Output In - Reads the contents of the bus into the output module and displays it.
- **CE** - Counter Enable - Enables the program counter.
- **CO** - Counter Out - Outputs the program counter contents to the bus.
- **J** - Jump - Jumps the program counter to the 4-bit value held on the bus. 

## Instructions
```
0000 - NOP - No operation
  
0001 - LDA - Loads Register A  
