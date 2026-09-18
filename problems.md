# Problems Encountered and Fixed
<ins>Note</ins>: Not all issues encountered are listed here, many were simple wiring mistakes. Always triple check your connections! 

* Inconsistent behavior from the memory modules
  - After noticing that the operation of the RAM/MAR modules depended on whether the breadboards were perfectly level or not I inspected each component on the boards. What I found was that the pins on the     74LS189s were too short to properly fit comfortably into the sockets of the breadboard. The solution was to use dip risers for both of these chips to secure a good connection.
* Fragile power supply
  - The power supply needs to be connected to a breadboard that is directly attached to the computer itself. Running wires across an open gap between the power supply and the computer lead to too many accidental resets.
* Memory corruption
  - 
