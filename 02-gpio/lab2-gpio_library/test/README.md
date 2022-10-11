# Lab 2: Ondřej Foltyn

### GPIO control registers

1. Complete the table for DDRB and PORTB control register values.

   | **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
   | :-: | :-: | :-: | :-: | :-- |
   | 0 | 0 | input | no | Tri-state, high-impedance |
   | 0 | 1 |input| yes | PBn will source current if ext. pulled low |  
   | 1 | 0 |output | no | 0 out |
   | 1 | 1 | output | no | 1 out |

### GPIO library

2. Complete the table with code sizes from three versions of the blink application.

   | **Version** | **Size [B]** |
   | :-- | :-: |
   | Arduino-style     | 480 |
   | Registers         | 172 |
   | Library functions | 182 |

### Traffic light

3. Scheme of traffic light application with one red/yellow/green light for cars, one red/green light for pedestrians, and one push button. Connect AVR device, LEDs, resistors, push button (for pedestrians), and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![traffic_light](https://github.com/OndraFoltyn/digital-electronics-2/blob/main/02-gpio/images/traffic_light_schematic.png)
