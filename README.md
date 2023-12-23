# IEEE Embedded Systems Workshop

## What's included in this repository?

>This repository will contain my Coursework from the Embedded Systems Workshops on _**Microcontroller Architecture and Interfacing with ARM Cortex**_. that was created by the IEEE. In these workshops, I explored the fundamental concepts of microcontroller architecture and learned how to interface with ARM Cortex-based microcontrollers. The workshops covered various topics to provide me with a comprehensive understanding of embedded systems.

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

Access additional workshop materials, slides, and resources on Google Drive: \
[Workshop Google Drive](https://drive.google.com/drive/folders/1nGR1J9SzmXIpPO03m8i160BUqqdw5mGg?usp=sharing)

 ---

# Mini Project Proposal
>
> ## _**Simulated Traffic Management System**_

## Mini Project Overview

We propose the development of a Simulated Traffic Management System that efficiently controls traffic lights based on pedestrian crosswalk requests. This system will utilize an STM32F103C8 microcontroller and various components, simulated within the Proteus environment, to manage traffic lights for both vehicles and pedestrians. Additionally, we will implement this system using FreeRTOS to ensure real-time operation and efficient multitasking.

## Mini Project Objectives

### Mini Project Primary Objectives

1. Control traffic lights for cars and pedestrians within the Proteus simulation environment.
2. Efficiently respond to pedestrian crosswalk requests.
3. Implement error handling and reporting.
4. Utilize FreeRTOS for real-time operation and multitasking.

## Hardware and Software Requirements

### Hardware Requirements (Simulated within Proteus)

- STM32F103C8 microcontroller simulation.
- Virtual push button for pedestrian requests.
- Virtual LEDs for traffic lights - Red, Yellow, and Green for cars and pedestrians.

### Software Requirements

- In normal mode (simulation):
  - Traffic lights for cars will cycle every five seconds: Green, Yellow, Red, Yellow, Green.
  - The Yellow LED will blink for five seconds before transitioning to Green or Red.
- In pedestrian mode (simulation):
  - Transition to pedestrian mode when the virtual pedestrian button is pressed.
  - Pedestrians can cross the street when the pedestrian's Green LED is on.
  - Pedestrians must wait when cars have the right of way.
  - Specific sequences for pedestrian crosswalk requests.

## System Design

- Define system layers.
- Define system drivers.
- Place each driver into the appropriate layer following SOLID principles.
- Define APIs for each driver with documentation.
- Define new data types for drivers.
- Define error handling and reporting mechanisms.

## Development Environment

- Configure Proteus simulation environment.
- Implement layered architecture in the Proteus project structure.
- Prepare all files for development with header file guards.
- Write typedefs and function prototypes.
- Include lower layer drivers in upper layer/calling drivers' header files.

## Implementation

- Write skeleton code for each function with comments.
- Convert comments into appropriate code.
- Ensure functions return error states.

## Testing

- Develop test modules for each driver.
- Implement and validate driver output within the Proteus simulation.

## System Flow

- Define the system flow based on requirements.
- Implement the system flow in the “APP_start” function.

## User Stories and Testing

1. **User Story 1:** As a pedestrian, when I make a short press on the crosswalk button while the car's green light is on and the pedestrian's red light is on, I will wait for the yellow lights to blink for five seconds, then the cars' red light is on, and the pedestrian green light is on for five seconds, so that I can cross the street.

2. **User Story 2:** As a pedestrian, when I make a short press on the crosswalk button while the car's yellow light is blinking and the pedestrian's red light is on, I will wait for all yellow lights to blink for five seconds, then the cars' red light is on, and the pedestrian green light is on for five seconds so that I can cross the street.

3. **User Story 3:** As a pedestrian, when I make short press the crosswalk button while the car's red light is on and the pedestrian's green light is on, I expect nothing to be done.

4. **User Story 4:** As a pedestrian, when I make a long press on the crosswalk button, I expect nothing to be done.

5. **User Story 5:** As a pedestrian, when I make a double press on the crosswalk button, I expect that the first press will do the action, and nothing will be done after the second press.

## Deliverables

1. PDF document containing:
   - System description.
   - System design.
   - System flow chart or state machine.
   - System constraints (if any).
2. Video presentation discussing the project.

## Mini Project Timeline

- Day 1-2: System design and Proteus environment setup.
- Day 3-4: Software design and architecture.
- Day 5-6: Development within the Proteus simulation.
- Day 7: Testing and documentation.

## Mini Project Budget

The estimated budget for this project includes any licensing costs associated with Proteus simulation software.

## Mini Project Conclusion

This mini project aims to create an efficient Simulated Traffic Management System that handles both vehicle traffic and pedestrian crosswalk requests within the Proteus simulation environment. By implementing this system with FreeRTOS, we ensure real-time operation and responsiveness. The final product will contribute to safer and more organized traffic management, even in a virtual setting.

---

# Final Project Proposal
>
> ## _**Autonomous Obstacle-Avoidance and Line Tracking Car with FreeRTOS**_

## Final Project Overview

We propose the development of an autonomous car capable of detecting obstacles and tracking lines using ultrasonic sensors and infrared sensors and managing tasks efficiently with FreeRTOS. The car will use a combination of components, including ultrasonic sensors, L293D motor driver, LCD, infrared sensors, and servo motor, to create a functional and efficient obstacle-avoidance and line-tracking system.

## Final Project Objectives

### Final Project Primary Objectives

1. Detect obstacles using ultrasonic sensors.
2. Analyze sensor data and make real-time decisions to change direction.
3. Implement motor control using the L293D motor driver.
4. Display the car's current direction on an LCD screen.
5. Utilize a servo motor for ultrasonic scanning within a 180° range.
6. Implement line tracking using infrared sensors.
7. Manage tasks efficiently with FreeRTOS for multitasking and real-time operation.

## Components and Materials

- Ultrasonic HC-SR04 sensor: To detect obstacles in the car's path.
- Servo motor: For scanning the environment using the ultrasonic sensor.
- L293D motor driver: To control the speed and direction of the car's motors.
- Motors: To drive the car's wheels.
- Caster wheel: To provide stability to the car's chassis.
- Chassis: The framework to hold all components securely.
- Infrared sensors: For line tracking.
- Microcontroller compatible with FreeRTOS.

## Project Implementation

- Hardware Assembly: Assemble the chassis, attach the motors, and mount the caster wheel.
- Ultrasonic Sensor Integration: Connect the ultrasonic sensor to the servo motor axis for scanning.
- Motor Control: Integrate the L293D motor driver to control the car's movement.
- LCD Integration: Connect the LCD to show the car's current direction.
- Software Development: Develop software to read ultrasonic sensor data, analyze it, control the motors, and implement line tracking.
- Scanning Algorithm: Design an algorithm for the servo motor to scan the environment using the ultrasonic sensor.
- Line Tracking Algorithm: Implement a line tracking algorithm using infrared sensors.
- FreeRTOS Integration: Configure and integrate FreeRTOS for efficient multitasking and real-time control.
- Testing and Calibration: Test the car's obstacle detection, avoidance, and line tracking capabilities. Calibrate the system for optimal performance.
- Fine-tuning: Adjust parameters and algorithms to enhance the car's responsiveness and accuracy.

## Final Project Expected Outcomes

Upon successful completion of the project, we anticipate achieving the following outcomes:

1. A functional autonomous car capable of detecting obstacles, changing direction to avoid them, and tracking lines.
2. Real-time display of the car's direction on the LCD screen.
3. Smooth and accurate scanning of the environment using the servo motor and ultrasonic sensor.
4. Effective line tracking capabilities using infrared sensors.
5. Efficient multitasking and real-time operation with FreeRTOS.

## Final Project Timeline

- Day 1-2: Hardware assembly and initial component integration.
- Day 3-4: Sensor integration, motor control, LCD connection, and software development.
- Day 5-6: Scanning and line tracking algorithm implementation.
- Day 7: FreeRTOS integration, testing, debugging, and calibration.
- Day 8: Final adjustments, documentation, and project presentation.

## Final Project Budget

The estimated budget for this project includes the cost of components such as the ultrasonic sensor, servo motor, L293D motor driver, LCD, motors, caster wheel, chassis, infrared sensors, and a microcontroller compatible with FreeRTOS. The total budget is expected to be [insert estimated budget].

## Final Project Conclusion

This final project aims to create an autonomous obstacle-avoidance and line-tracking car with the added capability of efficient multitasking and real-time operation using FreeRTOS. The final product will demonstrate advanced functionalities, making it suitable for various applications, including robotics and automation.

_______
All Credits go to the workshop organizer:

- Mahmoud Abdelraouf Mahmoud
- Email: <mahmoud126125@gmail.com>

_________

### Connect with me

Click the icon to contact 👆 :
<p align="center">
<a href="https://www.linkedin.com/in/omar-ashraf01" target="_blank"><img align="center" src="https://cdn-icons-png.flaticon.com/128/3938/3938061.png" alt="Linkedin" height="50" width="50" /></a>
<a href="https://twitter.com/omarash78893600" target="_blank"><img align="center" src="https://cdn-icons-png.flaticon.com/128/3938/3938043.png" alt="Twitter" height="50" width="50" /></a>
<a href="https://www.facebook.com/ommaar.ashrraaf" target="_blank"><img align="center" src="https://cdn-icons-png.flaticon.com/128/3938/3938025.png" alt="Facebook" height="50" width="50" /></a>
<a href="https://www.instagram.com/ommaar_ashrraaf/" target="_blank"><img align="center" src="https://cdn-icons-png.flaticon.com/128/3938/3938036.png" alt="Instagram" height="50" width="50" /></a>
</p>
