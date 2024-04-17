# Rotary Encoder Display (Bare Metal)

This project is designed to program an STM32F4 microcontroller to read a 2-bit rotary encoder and display a number from 0 to 15 on a 7-segment display, all without using any HAL (Hardware Abstraction Layer) libraries. Instead, all drivers are written from scratch, adhering to a bare-metal approach. The count is reset to zero when the rotary encoder is clicked.

## Features (V1)

- **Bare Metal Programming**: Directly interacts with the STM32F4's hardware registers, bypassing the HAL layer.
- **2-bit Rotary Encoder Reading**: Utilizes a KY-040 style rotary encoder module to increment or decrement a count value.
- **7-segment Display Output**: Displays the current count value on a 7-segment display, ranging from 0 to 10.
- **Click Reset**: Resets the count to zero when the rotary encoder is clicked.

## Hardware Requirements (V1)

- STM32F4 microcontroller board (using a Black Pill)
- KY-040 style rotary encoder module
- 7-segment display

## Firmware Setup (V1)

1. **Encoder Pins**: Define the encoder pins (clock and data) according to the encoder module.
1. **CD4511 Pins**: Define the CD4511 pins (D0, D1, D2, D3, D4).

## Code Overview (V1)

- **Encoder Reading**: Implement a function to read the encoder's state and update the count accordingly.
- **Display Update**: Update the 7-segment display to reflect the current count value.
- **Click Reset**: Implement functionality to reset the count to zero when the rotary encoder is clicked.

### Code Implementation (V1)

**Header files**

- [Driver STM32F4](FIRMWARE_V1/Drivers/Inc/stm32f4.h)
- [Driver Gpio](FIRMWARE_V1/Drivers/Inc/gpio.h)
- [Driver Pinout](FIRMWARE_V1/Drivers/Inc/pinout.h)
- [Driver Encoder](FIRMWARE_V1/Drivers/Inc/encoder.h)

**Source files**

- [Main File](FIRMWARE_V1/Src/main.c)
- [Driver Gpio](FIRMWARE_V1/Drivers/Src/gpio.c)
- [Driver Pinout](FIRMWARE_V1/Drivers/Src/pinout.c)
- [Driver Encoder](FIRMWARE_V1/Drivers/Src/encoder.c)

