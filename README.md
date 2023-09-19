# IEEE Embedded Systems Workshops

## What's included in this repository?

This repository will contain my Work from the Embedded Systems Workshops on _**Microcontroller Architecture and Interfacing with ARM Cortex**_. that was created by the IEEE. In these workshops, I explored the fundamental concepts of microcontroller architecture and learned how to interface with ARM Cortex-based microcontrollers. The workshops covered various topics to provide me with a comprehensive understanding of embedded systems.

## Workshop Overview

### Workshop Content

| No.    | Title                                     | Description                  |
| ------ | ----------------------------------------- | ---------------------------- |
| 01     | Quick Recap about C-language Basics       | Refresh your knowledge of C-language basics, including data types, loops, functions, arrays, etc. Learn about bits manipulation and file handling in C. |
| 02     | Discuss Important Advanced Topics in C    | Dive deeper into advanced C topics, focusing on pointers, function-like macros, inline functions, processor architecture, and build processes. |
| 03     | ARM Architecture Basics                   | Explore the history and design of ARM processors. Learn about ARM core peripherals, AMBA bus, and register definitions. Understand the transition from Harvard to Von Neumann architecture. |
| 04     | RCC Peripheral                            | Learn about microcontroller clock types, PLL and FLL, and different reset types. Understand the Reset and Clock Control Peripheral Driver for STM32 microcontrollers. |
| 05     | GPIO Peripheral                           | Gain knowledge about digital input/output peripheral basics. Learn about different input and output modes. Build a Digital I/O driver for ST microcontrollers and practice interfacing with LEDs and tactile switches. |
| 06     | ARM Interrupts                            | Understand the basics of interrupts, handling techniques, and the Nested Vectored Interrupt Controller (NVIC). Explore interrupt priority grouping for efficient interrupt handling. |
| 07     | NVIC Driver                               | Dive into NVIC registers' definitions and build an NVIC driver. Simulate interrupt features to understand their behavior. |
| 08     | EXTI                                      | Learn about external interrupts' basics and the AFIO peripheral. Build an EXTI driver to handle external interrupts effectively. |
| 09     | SysTick                                   | Explore timer basics and SysTick core peripheral. Compare interval vs. busy-wait delay. Understand synchronous vs. asynchronous design. Build a SysTick driver and work with callback functions. |
| 10     | OS Scheduler                              | Get introduced to operating systems basics. Build a real-time scheduler, and learn about time-triggered and dynamic design aspects. |
| 11     | UART                                      | Explore serial communication characteristics and UART basics. Build a UART driver and practice interfacing with USB TTL modules. |
| 12     | SPI and TFT                               | Learn about SPI basics, build an SPI driver, and understand pixel color modes. Explore different display types, including interfacing TFT displays and working with bit map images.|
| 13     | DMA                                       | Explore direct memory access (DMA) definitions and basics. Understand DMA authorities against the processor and build a DMA driver. |


### Workshop Playlist
[IEEE - Embedded Systems Workshop](https://youtube.com/playlist?list=PLyybLGjovkASRFFnpFt9X-gI0Pj6YKqJK&si=4Btsg5MCuFBeb-Ue)

### Workshop Drive
Access additional workshop materials, slides, and resources on Google Drive:
[Workshop Google Drive](https://drive.google.com/drive/folders/1nGR1J9SzmXIpPO03m8i160BUqqdw5mGg?usp=sharing)

## Project Proposal
> _**PWM Drawer with Real-Time Display on Graphical LCD**_

### Project Overview:

The PWM Drawer project aims to develop a real-time PWM signal measurement and visualization tool. The system will capture PWM signals using hardware input capture, calculate the PWM frequency and duty cycle, and display the waveform in real time on a graphical LCD. This project will provide valuable insights into PWM signals' characteristics and allow users to observe and analyze PWM waveforms quickly and accurately.

________________

### _Features:_

1. Hardware Input Capture: Utilize the hardware input capture capability of the ATmega32 (AVR) microcontroller to accurately measure the PWM signal pulse width and calculate the frequency.
2. Graphical LCD Interface: Interface with a graphical LCD (e.g., ST7735, SSD1306) using a suitable graphical LCD library (e.g., u8g2) to draw real-time PWM waveforms.
3. Real-Time Display: Continuously update the graphical LCD with the latest PWM measurements, providing real-time visualization of the PWM waveform.
4. Frequency and Duty Cycle Calculation: Implement algorithms to calculate the PWM frequency and duty cycle based on the captured pulse width.
5. User Interface: Develop a user interface to control the PWM measurements and display settings. Use buttons or a touchscreen to start/stop measurements, switch between PWM channels, and adjust display parameters.
6. Data Logging (Optional): Add an optional feature to log captured PWM data to external storage (e.g., SD card) for further analysis or export to a computer.

________________

### _Hardware Requirements:_

1. ATmega32 (AVR) Development Board.
2. Graphical LCD Module (e.g., ST7735, SSD1306) with appropriate interface (SPI/I2C).
3. Potentiometer (optional) to simulate variable PWM input.
4. User Input Components (e.g., buttons, touchscreen) for the user interface.
5. External Storage (e.g., SD card) if data logging is implemented.

________________

### _Software Components:_

1. STM32 HAL Library: Use the STM32 HAL library to configure the microcontroller's GPIO, TIM, and other peripherals.
2. Graphical LCD Library: Utilize a graphical LCD library (e.g., u8g2) to draw PWM waveforms and text on the graphical LCD.
3. Input Capture and PWM Measurement: Implement interrupt-driven code to capture PWM signals using hardware input capture and calculate frequency and duty cycle.
4. User Interface: Create a user interface to control PWM measurements and display settings.
5. Data Logging (Optional): If data logging is required, implement code to write captured data to external storage.

________________

### _Milestones:_

1. Hardware and Software Setup: Configure the ATmega32 (AVR) development board and establish communication with the graphical LCD module.
2. PWM Measurement: Implement hardware input capture to measure PWM signals and calculate frequency and duty cycle.
3. Real-Time Display: Create a real-time display loop to continuously update the graphical LCD with PWM waveforms.
4. User Interface: Develop a user interface to control PWM measurements and display settings.
5. Data Logging (Optional): Implement data logging functionality if required.
6. Testing and Debugging: Test the system thoroughly, identify and fix any bugs, and optimize performance.
7. Documentation and Presentation: Document the project thoroughly, including hardware connections, code explanations, and user instructions. Prepare a presentation to demonstrate the project's functionality.

________________

### _Conclusion:_

The PWM Drawer with Real-Time Display project aims to provide a valuable tool for measuring and visualizing PWM waveforms. By using hardware input capture and a graphical LCD interface, the system will offer an accurate and real-time representation of PWM signals. The user-friendly interface and optional data logging make it suitable for various applications, including debugging PWM-controlled systems, testing motor control, and analyzing power circuits.

## About IEEE

The Institute of Electrical and Electronics Engineers (IEEE) is the world's largest technical professional organization dedicated to advancing technology for the benefit of humanity. IEEE and its members inspire a global community to innovate for a better tomorrow through its highly-cited publications, conferences, technology standards, and professional and educational activities.

For more information about IEEE, visit [IEEE Official Website](https://www.ieee.org/).

________________

### Connect with me

Click the icon to contact 👆 :
<p align="center">
<a href="https://www.linkedin.com/in/omar-ashraf01" target="_blank"><img align="center" src="https://github.com/Omar-26/Icons/blob/main/linkedin.png?raw=true" alt="Linkedin" height="50" width="50" /></a>
<a href="https://twitter.com/omarash78893600" target="_blank"><img align="center" src="https://github.com/Omar-26/Icons/blob/main/twitter.png?raw=true" alt="Twitter" height="50" width="50" /></a>
<a href="mailto:eng.omar.ashraf26@gmail.com" target="_blank"><img align="center" src="https://github.com/Omar-26/Icons/blob/main/gmail.png?raw=true" alt="Gmail" height="61" width="52" /></a>
<a href="https://www.facebook.com/ommaar.ashrraaf" target="_blank"><img align="center" src="https://github.com/Omar-26/Icons/blob/main/facebook.png?raw=true" alt="Facebook" height="50" width="50" /></a>
<a href="https://www.instagram.com/ommaar_ashrraaf/" target="_blank"><img align="center" src="https://github.com/Omar-26/Icons/blob/main/instagram.png?raw=true" alt="Instagram" height="52" width="52" /></a>
<a href="https://www.hackerrank.com/eng_omar_ashraf1?hr_r=1" target="_blank">
<img align="center" alt="Omar's hackerrank" width="49" height="52" src="https://assets.brandfolder.com/y9ol94wb/v/331198/view@2x.png?v=1591971279" draggable="false" />
</a>
</p>
