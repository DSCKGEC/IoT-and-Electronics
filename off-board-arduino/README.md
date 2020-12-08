# How to make arduino projects off-board | for beginners

So, in our <a href="https://youtu.be/J9IwWvLgvx8">video</a> we have discussed about how to build arduino projects without using an arduino kit.
Since, ATmega328p is used as the microcontroller on Arduino, at first we will have to prepare it by burning its bootloader, by setting its fuses, clock frequencies ports, etc. But don't worry, we won't have to do those manually, as Arduino IDE provides us an option to do it in just one click. But, at first we have to use SPI protocol to burn it's bootloader.<br>
It is recommended to read this <a href=https://www.clko.ml/PuyfNK>documentation/datasheet</a> for ATmega328p given in this pdf: https://www.clko.ml/PuyfNK <br>
However it is suggested for you to read only the specific part of document you need to know at the moment and not the whole document at a time, because it's very elaborate and it's not required to read all of it. Reference: see page number: 65, where all the SPI pins are listed in a tabular form(Look for SCK,MISO and MOSI).<br>

Here is a detailed Pin-Out diagram of the 28pin ATmega ICs (which includes ATmega328p as well).<br>
<img src = https://camo.githubusercontent.com/21dd57865a9dfc93318d86dfb85310305b62a0dd0e41df6e274aa91721986828/68747470733a2f2f692e696d6775722e636f6d2f715849456368542e6a7067 width = 80%/>

To do this we can use:

1. Using Arduino as ISP: Here we will use another Arduino Uno, or any other arduino, to progream the target IC using SPI.

Here is a schematic explaining the connections for SPI with Arduino as ISP, which is a very simple solution if you have a spare Arduino in hand. Please note that the indicator LEDs are optional, just to indicate the programmer status.
<img src = https://user-images.githubusercontent.com/55695557/101323304-7a1a7d80-388e-11eb-91da-76c1df12c4b1.png width = 80%/>

2. Using an SPI Programmer like USBasp: Here we will show how to use USBasp, which is a popular as well as very in-expensive open source SPI programmer.
Here is a schematic explaining the connections for SPI with USBasp.
<img src = https://user-images.githubusercontent.com/55695557/101322075-69690800-388c-11eb-88ba-88ce9600b7ec.png width = 60%/>

After we have burned the bootloader of the target microcontroller, we can upload it using the same SPI protocol, or we can use UART programmer that Arduinos generally use.

In the UART programming section, here are the prerequisites given below:

Here's the schematic whose corresponding vero-board circuit is bult in the video:
<img src=https://user-images.githubusercontent.com/55695557/101391195-0017e200-38ea-11eb-93ba-f96fd553b66b.png  width = 60%/>

### Libraries Required
1.Timer.h<br>
2.LedControl.h<br>
3.Ultrasonic.h<br>
![image](https://user-images.githubusercontent.com/56502015/101317676-f4460480-3884-11eb-84ad-8b1ef3eb0573.png)

(Install these libraries from this Repository)

### Installing libraries
<ol>
  <li>After downloading the repository→Extract the library zip files</li>
  <li>Go to Sketch→Include library→Add .ZIP Library</li>
  <li>Select the the library.zip files</li>
  </ol>
  
![image](https://user-images.githubusercontent.com/64885833/81465777-25286300-91ea-11ea-97d5-b2a5463cd2d5.png) 

Also install the driver for PL2303 USB To TTL converter provided in this repository:
<li>Drivers(folder)→<a href="https://github.com/DSCKGEC/IoT-and-Electronics/raw/main/off-board-arduino/Drivers/PL-2303_Drivers-Generic.zip">PL-2303_Drivers-Generic.zip</a></li>
<br><br>
You can find the Codes used in the Video:
<li><a href="https://github.com/DSCKGEC/IoT-and-Electronics/tree/main/off-board-arduino/Codes">Codes(folder)</a></li>
<br><br>
Schematic:
<li><a href="https://github.com/DSCKGEC/IoT-and-Electronics/blob/main/off-board-arduino/Schematics/SPI_UART_Atmega328P.pdf">Schematic(folder)</a></li>
<li>Finally, be sure to check out our EasyEDA for the PCB, if you want to make one by yourself, feel free to copy it to your easyEDA account, modify it as per your needs. <a href="https://easyeda.com/editor#id=72610bcfc30b4634a111c1cdf9bfca46|7b4d203083e940adac1f1cd1635dc420">EasyEDA PCB Layout</a> or <a href="https://oshwlab.com/anindya_electronic_hobbyist/dsc_arduino_clone">EasyEDA Project</a> </li>
