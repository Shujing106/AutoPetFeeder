# Introduction
Using raspberry PI to make an automatic feeder, real-time monitoring of pet movement and food weight. Realize intelligent feeding, protect the health of pets.

# Configuration-Requirement
* Raspberry Pi 3B+
* C++

# Equipment
Raspberry Pi  
Ultrasonic sensor  
Weight sensor  
Step motor  
Paperboard  
Large plastic bottle

# Object
* Limiting conditions:  
   1.There will be a 4h cooldown time after feeding is first turned on.  
   2.The machine can only be turned on three times within 24 hours.
* Ultrasonic sensors detect the distance from the pet, and the feeder starts working when the pet approaches.
* The weight sensor detects the weight of the food in the bowl. When the weight of food < 50g, start the motor to make the baffle turn to replenish food. When the weight of food > 300g, the motor stops rotating.
