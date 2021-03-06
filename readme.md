# RGB MP3 Player with Game

This repository contains the source code of an MP3 Player running on LPC 1768. The core source code are provided while the device drivers are removed. 

### Introduction
This is a two weeks long academic project. Modifications may be required as the original code is written for RTOS (Real-time operating system) and the optimization has been removed in the source code. As noticed, the source code will not work by default. You have to write your own device drivers for LCD (I2C) and MP3 Decoder (SPI). The source code is written is C++ based. 

### Feature
- Play, Pause, Stop (Song will begin at the beginning of the track)
- Next, Previous
- Fast Forward
- Bass, Treble, Volume control
- Truck Lane Game

### Hardware 
- [SJ One Board](http://www.socialledge.com/sjsu/index.php?title=SJ_One_Board#About_the_Board)
- [Grove - 16x2 LCD RGB Backlight](http://wiki.seeed.cc/Grove_Starter_Kit_v3/#grove-lcd-rgb-backlight)
- [SparkFun MP3 Player Shield](https://www.sparkfun.com/products/12660)
- Jumper Wires
- LM7805 Voltage Regulator (Optional if powered via USB)
- 9V Battery (Optional if powered via USB)

### Live Demo
[![Link To Youtube](https://img.youtube.com/vi/uULmRoWzzPE/0.jpg)](https://www.youtube.com/watch?v=uULmRoWzzPE)

### Team Member
- [Yi Cong Ch'ng (Melvin)](https://github.com/melvinchng/)
- [Joseph Tingin](https://github.com/josephnikko)
- Anton Pedruco

### References
- [Social Ledge](http://www.socialledge.com/sjsu/index.php?title=Main_Page)
- [LPC 1768 Datasheet](https://www.nxp.com/docs/en/data-sheet/LPC1769_68_67_66_65_64_63.pdf)
- [SparkFun MP3 Player Arduino Library](https://github.com/sparkfun/MP3_Player_Shield)
- [Grove - LC RGB Backlight Arduino Library](https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight/)
- [Hitachi HD44780 Datasheet](https://www.sparkfun.com/datasheets/LCD/HD44780.pdf)
- [Truck Lane 16x2 Game](https://gist.github.com/thedod/715269)

To be completed