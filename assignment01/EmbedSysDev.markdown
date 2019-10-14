Shawn Moy, EMBSYS 100 B Au 19, Assignment 01, 10/14/19 

Using the telegraph example, and the challenges listed in the book and the module as reference, describe another device that you would like to discuss. Describe how you think its embedded system works, and what design challenges it presents.

https://realpars.com/absolute-vs-incremental-encoder/
https://en.wikipedia.org/wiki/Rotary_encoder#Absolute_and_incremental_encoders
https://en.wikipedia.org/wiki/Incremental_encoder#Incremental_encoder_interface
https://www.embedded.com/implementing-finite-state-machines-in-embedded-systems/
https://embeddedsystemengineering.blogspot.com/2016/07/arm-cortex-m3-stm32f103-tutorial.html

Rotary encoders are used with computer mouse, motors, dials and more.  Rotary encoders contain a transducer that signals position and direction of a spindle. The spindle includes a perforated disc and the transducer emits photoelectric light through its rotation. Two types of encoders are absolute and incremental.

Absolute is pattern of code rings with various weightings providing a data word.  Rotation of rings transmit binary code.  Signal is a gray scale that corrects a radian intersecting a ring and bit within span of an angle that only all aligning bits recorded.  Such case if a power outage, rotating the spindle and returning power memory is recoverable.  

Incremental has a pattern of square holes near outer edge of disc.  Each rotation of the holes is angular and a count consecutively. Signals are A and B outputs, quadrature, infinite-state machine and amalgam of stored binary.  Z ouput maybe included to signal rotation or index and 360 degrees. Powering off an incremental encoder doesn't retain origin and upon powering on a new orign is established.  Incremental encoders a less complex than absolute encoders thereby incremental encoders less expensive.




