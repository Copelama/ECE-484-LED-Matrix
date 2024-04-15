# Project Description:

This project interfaces an LED-Matrix on an Arduino Uno. The main programs (library and code) are in C, while the compiling script is written in Python. 

## Introduction:

An LED-Matrix is an array of LEDs that can be controlled individually. This project is set up to use the HiLetGo MAX7219 LED-Matrix. It works by sending a column and row value and a high or low (1 or 0) signal to the device, turning that LED on. 

## Materials:

- Arduino Uno R3
- Jumper Wires
- HiLetGo MAX7219 LED-Matrix

## Directions:

1. Download all files and place into into their own folder.
2. Open Windows Powershell and type cd "path to your folder containing the files"
3. Run compile script through Windows Powershell using "Python compile_script.py 4 com4" (your com port might be different, be sure to check!).


## Schematic:
![image](https://github.com/Copelama/ECE-484-LED-Matrix/assets/118077780/3c97b849-8d4e-416b-951f-249311c8f10f)

## HiLetGo MAX7219 Datasheet:
Below is the datasheet for the LED-Matrix, note that multiple LED-Matrices can be chained together, this demonstration only uses one LED-Matrix.
https://www.sparkfun.com/datasheets/Components/General/COM-09622-MAX7219-MAX7221.pdf 


## Demonstration:
[https://youtube.com/shorts/Du_eAPYcjRg ](https://youtube.com/shorts/Du_eAPYcjRg?feature=share) 
