## Overview
This project demonstrates basic GPIO input and output control using the ARM7 LPC21xx microcontroller. Two push-button switches are used to control two LEDs based on defined logic conditions.

The project focuses on understanding:
	•	GPIO input handling
	•	Bit manipulation
	•	Active-low switch logic
	•	Conditional control of multiple outputs
# GPIO Switch Controlled LED Logic (ARM7 LPC21xx)  

## Hardware Used
	•	LPC21xx (ARM7TDMI) Microcontroller
	•	2 Push Button Switches
	•	2 LEDs
	•	Regulated Power Supply
  
  ## Software 
	•	Embedded C
	•	Keil µVision IDE
	•	Flash Magic

  
## Working Principle

### Case 1:
When Switch 1 is pressed, only then Switch 2 functionality becomes active.
### Case 2:
If Switch 2 is pressed (while Switch 1 is pressed),
→ LED1 turns ON
→ LED2 turns OFF
### Case 3:
If Switch 2 is released (while Switch 1 is pressed),
→ LED2 turns ON
→ LED1 turns OFF
### Additional Condition:
If Switch 1 is not pressed,
→ Both LEDs remain OFF

