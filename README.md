# MCP401X-STM32-Library-mcp4017-4018-4019-

Library and example to interface MCP401X series (MCP4017/4018/4019) digital potentiometers

![](Img.jpg)

## Getting Started

### Connection Diagram

Tested on [NUCLEO-L433RC-P](https://www.st.com/en/evaluation-tools/nucleo-l433rc-p.html) with STM32L433RCT6PU IC. Vcc = 3.3V


|Sl No |      STM32                    |  MCP401X     |
|------|-------------------------------|-------------:|                                   
| 1    | 3.3V                          | 1            |
| 2    | GND                           | 2            |
| 3    | SCL/D15(PB8)                  | 3            |
| 4    | SDA/D14(PB7)                  | 4            |

Measuring Resistance will depend on which MCP401X IC is being used. 
MCP4017 and MCP4019 are Rheostats, MCP4018 is a Potentiometer. Check [Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/22147a.pdf) for pinouts.


![](STM32_Connection.png)
