![Project Screenshot](Images/Overview.jpg)

# SAP-1-Breadboard
Based on Ben Eater's video series on YouTube & the schematics available on his website https://eater.net/8bit, this 8-bit SAP (Simple As Possible) breadboard computer project was a colorful introduction to basic computer architecture. 

Built almost entirely using logic ICs, with some more complex components and additions, the 8-bit breadboard CPU demands a resilient mindset in order to complete. There are many setbacks and unexpected issues that arise from the physical implementation of a great number of individual components. These problems range from diagnosing faulty hardware to unpredictable behaviors of certain components due to the breadboard environment. 

My goal with this documentation is to share the insights I gained and where I found solutions to problems which were beyond my expertise. 

## Overview
The computer is able to be programmed manually through the MAR and RAM modules using dip switches, where microcode instructions are inputted into locations within memory which the computer then advances through. The control logic of the computer uses two AT28C64B EEPROMs that are programmed using a homemade Arduino Nano EEPROM programmer (also Ben Eaters idea). The EEPROMs translate what is stored in RAM to instruction sets that the computer then runs through. 

### Instructions
