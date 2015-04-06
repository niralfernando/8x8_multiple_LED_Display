#MULTIPLE 8X8 DISPLAYS WITH GPIO EXPANDERS(I2C protocol)#
###Description
MCP23017 GPIO expanders were connected to an I2C channel in Arduino Microcontroller. I2C protocol allows one to maximize the number of I/O ports. The maximum number of GPIO expanders that can be connected are 8(3 pins in the GPIO expander are hardwired with 1s and 0s that defines their corresponding slave address;therefore, 2^3 = 8).

<img src="https://raw.githubusercontent.com/niralfernando/8x8_multiple_LED_Display/master/images/multiple8x8.jpg" 
alt="IMAGE ALT TEXT HERE" width="240" height="180" border="10" />


Click the following link to see how I2C protocol work, <http://www.robot-electronics.co.uk/acatalog/I2C_Tutorial.html> 

The following website helped me greatly on programming multiple 8x8 displays using Wire.h library in Aruduino IDE, <http://tronixstuff.com/2011/08/26/tutorial-maximising-your-arduinos-io-ports/>

MCP23017.h library: <https://github.com/kasperskaarhoj/MCP23017-Arduino-Library/blob/master/MCP23017.h>

_Author: [Niral Fernando](http://www.eng.uwaterloo.ca/~mn2ferna/)_

_Email : <niral.fernando@gmail.com>_

_Phone: 647-922-9265_