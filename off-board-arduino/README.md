<style>
img[alt=Arduino_SPI_bb] { width: 80%; display: flex;}
img[alt=USBasp_bb] { width: 60%; display: flex;}
</style>

# How to make arduino projects off-board | for beginners

So, in out video https://youtu.be/J9IwWvLgvx8 we have discussed about how to build arduino projects without using an arduino kit.
Since, ATmega328p is used as the microcontroller on Arduino, at first we will have to prepare it by burning its bootloader, by setting its fuses, clock frequencies ports, etc. But don't worry, we won't have to do those manually, as Arduino IDE provides us an option to do it in just one click. But, at first we have to use SPI protocol to burn it's bootloader.

To do this we can use:

1. Using Arduino as ISP: Here we will use another Arduino Uno, or any other arduino, to progream the target IC using SPI.

Here is a schematic explaining the connections for SPI with Arduino as ISP, which is a very simple solution if you have a spare Arduino in hand.
![Arduino_SPI_bb](https://user-images.githubusercontent.com/55695557/101323304-7a1a7d80-388e-11eb-91da-76c1df12c4b1.png)

2. Using an SPI Programmer like USBasp: Here we will show how to use USBasp, which is a popular as well as very in-expensive open source SPI programmer.
Here is a schematic explaining the connections for SPI with USBasp.
![USBasp_bb](https://user-images.githubusercontent.com/55695557/101322075-69690800-388c-11eb-88ba-88ce9600b7ec.png)


After we have burned the bootloader of the target microcontroller, we can upload it using the same SPI protocol, or we can use UART programmer that Arduinos generally use.