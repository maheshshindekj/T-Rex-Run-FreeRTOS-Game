# T-Rex-Run-FreeRTOS-Game

Abstract:

T-Rex Run! game is an adaptation of popular chrome browser offline game in which the player steers a T-Rex dinosaur through increasingly dangerous landscapes to escape a tree of doom. The game uses simple pixel art and sound to replicate the style of 1980s arcade games. The player will be able to control the game by using switch buttons available on the Sjtwo-C microcontroller. The main goal behind the project is to understand the basics of graphics programming in the C language on a microcontroller.

Objectives & Introduction:

The primary objective of this project is to write efficient code to develop a game using FreeRTOS and SJTwo Board. SJTwo Boards act as the heart of the project which acts as the controller of the game which we primarily test using onboard switch controlled with GPIO. The main objective which we are achieving with is to use the onboard switch as a controlling aspect. The onboard switch on the SJTwo board which is connected via GPIO is used to register the controller orientation and according to the orientation obtained by the sensor, game logic decides whether to make dinosaur jump up or not. The obstacles are generated randomly and are moved from left to right on the LED matrix. If dinosaur collides with any of the obstacles its game over. The speed of obstacle movement increases as the levels goes up.

The project includes the following modules:

1. Controller: One SJTwo board is used as the controller. It transmits position of a dinosaur to the processor.

2. Display Module: Adafruit 32x32 Led Matrix display is used to display the game. This is driven by the GPIO pins on the master SJOTwo Board.

The details of the projects could be found out on the link below:

http://socialledge.com/sjsu/index.php/F19:_T-Rex_Run!#Testing

