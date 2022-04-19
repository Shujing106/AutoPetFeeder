[![4-Contributor](https://img.shields.io/badge/Contributors%20-4-brightgreen.svg?style=flat-square)](https://github.com/Shujing106/realtimeEmbedded/graphs/contributors)     [![License](https://img.shields.io/badge/License%20-MIT-red.svg?style=flat-square)](https://github.com/Shujing106/realtimeEmbedded/blob/main/LICENSE) [![Stars](https://img.shields.io/badge/Stars%20-2-yellow.svg?style=flat-square)](https://github.com/Shujing106/realtimeEmbedded/blob/main/LICENSE) [![Fork](https://img.shields.io/badge/Fork%20-1-blue.svg?style=flat-square)](https://github.com/Shujing106/realtimeEmbedded/blob/main/LICENSE) 

# Demo
![image](https://github.com/Shujing106/realtimeEmbedded/blob/bc505a64a9148ac952772ca07c4a7179f093678b/video/autoPetFeeder.gif)

Full version video and Follow us on: 
* [Youtube](https://youtu.be/EHu-TGHlu9M)
* [Instagram](https://www.instagram.com/tv/CciDeC0DURO/?igshid=YmMyMTA2M2Y=)

# Introduction
Using raspberry PI to make an automatic feeder, real-time monitoring of pet movement and food weight. Realize intelligent feeding, protect the health of pets. 
![image](https://github.com/Shujing106/realtimeEmbedded/blob/fe9dbf94ca11b8fd0e8629ee8bc73eff777eb14c/image/Demo2.jpg)

# Configuration-Requirement
* Raspberry Pi 3B+
* C++
* Sensors

# Equipment
Raspberry Pi 3B+ 
Ultrasonic sensor (HC-SR04)
Weight sensor (HX711)
Step motor (28BYJ-48)
Paperboard  
Large plastic bottle
Bowl

# Circuit Diagram
![image](https://github.com/Shujing106/realtimeEmbedded/blob/947e1cb685058c497032255ce45a63e7fd66b8ab/image/circuit%20diagram.JPG)

# Object
* Ultrasonic sensors detect the distance from the pet, and the feeder starts working when the pet approaches.
* The weight sensor detects the weight of the food in the bowl. When the weight of food < 10g, starts the motor to make the baffle turn to replenish food. When the weight of food > 50g, the motor rotates backward.

* Limiting conditions:  
   1.There will be a 4h cooldown time after feeding is first turned on.  
   2.The machine can only add the food for three times within 24 hours.

# Contact us 
Peihan Song 2703170s@student.gla.ac.uk
Yifei Wang 2554706w@student.gla.ac.uk
Shujing Yan 2658203y@student.gla.ac.uk
Xudong Fu 2528996f@student.gla.ac.uk

Project Link: https://github.com/hnhkfcy/Smart-Pets-Feeder
Youtube Link: https://www.youtube.com/channel/UCd4SohKJhAdILFnYUXcsUTw
Instagram Link: https://www.instagram.com/tv/CciDeC0DURO/?igshid=YmMyMTA2M2Y=
