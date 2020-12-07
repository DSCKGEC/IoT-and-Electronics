# How to make arduino projects off-board | for beginners

So, in out video https://youtu.be/J9IwWvLgvx8 we have discussed about how to build arduino projects without using an arduino kit.
Since, ATmega328p is used as the microcontroller on Arduino, at first we will have to prepare it by burning its bootloader, by setting its fuses, clock frequencies ports, etc. But don't worry, we won't have to do those manually, as Arduino IDE provides us an option to do it in just one click. But, at first we have to use SPI protocol to burn it's bootloader.

To do this we can use:

1. Using Arduino as ISP: Here we will use another Arduino Uno, or any other arduino, to progream the target IC using SPI.

2. Using an SPI Programmer like USBasp: Here we will show how to use USBasp, which is a popular as well as very in-expensive open source prorogrammer.
<img src="off-board-arduino\Arduino SPI_bb.png">
After we have burned the bootloader of the target microcontroller, we can upload it using the same SPI protocol, or we can use UART programmer that Arduinos generally use.