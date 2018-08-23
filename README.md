<img src="https://github.com/matiassingers/awesome-readme/blob/master/icon.png" align="right" />

# Home Automation using Arduino

Complete Arduino based Remote controlled Home Automation project for Engineering students and [Neophile](https://en.wikipedia.org/wiki/Neophile).

<h1>Getting Started</h1>

## Prerequisites

Basic knowladge of making electrical circuitary/connections and C/C++ programming language.

### Components list

<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/arduno_uno.jpg" align="right" height="200px" />
<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/basicRemote_large.jpg" align="right" width="200px" height="200px" />

* Arduino UNO
* TSOP1738
* IR TV/DVD Remote or any Generic Remote
* Relays 5 volt module
* Bulb with holder
* Connecting wires
* Bread board
* Power supply
> Other Tools Needed:
* Soldering Iron
* Soldering Wire
* Soldering paste
* Non-metallic Box(used as enclosure for the device)
* Utility Knife and glue

## Tutorial

> Follow these steps for complete connections and circuitary.

### Step 1: Solder IR sensor On The PCB.

<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/step1-1.jpg" align="right" width="200px" height="200px" />
<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/step1-2.jpg" align="right" width="200px" height="200px" />


In this step we need to solder the TSOP1738 IR sensor to a small piece of PCB. Like the image given above.


### Step 2: Connect "TSOP1738" with Arduino.


Pin Diagram of **TSOP1738**


<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/pin_diagram.png" align="left" width="200px" height="200px" />
<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/pin_diagram.jpg" align="right" width="200px" height="200px" />


* Arduino +5V -> TSOP1738 Vcc or +5V
* Arduino Gnd -> TSOP1738 Gnd
* Arduino Pin 11 -> TSOP1738 Pin OUT


<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/pin_conn.png" align="center" width="200px" height="200px" />


> **Arduino Pin 11** will take **input** from **TSOP1738** 


### Step 3: Test "TSOP1738" output with Arduino Serial Monitor


<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/test_input.jpg" align="center" width="200px" height="200px" />


**Hex Value Table**

| **Button**    | **Hex Value** |
| ------------- |:-------------:|
| 0             | 0x1FEE01F     |
| 1             | 0x1FE50AF     |
| 2             | 0x1FED827     |
| 3             | 0x1FEF807     |
| 4             | 0x1FE30CF     |
| 5             | 0x1FEB04F     |
| 6             | 0x1FE708F     |
| 7             | 0x1FE00FF     |
| 8             | 0x1FEF00F     |
| 9             | 0x1FE9867     |

Now use these codes in arduino sketch. When these codes match with the stored one do something. You can see these in my code that decodes the IR remote control button and shows the button number on the serial monitor.


### Step 4: Connect Relays according to your purpose

> Relay Connection

<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/relay_conn.png" align="center" width="200px" height="200px" />


### Step 5: Final Circuit

<img src="https://github.com/ashish-eqn/home-automation-using-Arduino/blob/master/Doc/final_circuit.jpg" align="center" width="200px" height="200px" />


## License

[![CC0](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0b/License_icon-mit-2.svg/156px-License_icon-mit-2.svg.png)](LICENSE)
