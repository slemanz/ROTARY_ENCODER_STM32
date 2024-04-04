# Rotary Encoder Display (Bare Metal)

This project is designed to program an STM32F4 microcontroller to read a 2-bit rotary encoder and display a number from 0 to 10 on a 7-segment display, all without using any HAL (Hardware Abstraction Layer) libraries. Instead, all drivers are written from scratch, adhering to a bare-metal approach. The count is reset to zero when the rotary encoder is clicked.

## Features

- **Bare Metal Programming**: Directly interacts with the STM32F4's hardware registers, bypassing the HAL layer.
- **2-bit Rotary Encoder Reading**: Utilizes a KY-040 style rotary encoder module to increment or decrement a count value.
- **7-segment Display Output**: Displays the current count value on a 7-segment display, ranging from 0 to 10.
- **Click Reset**: Resets the count to zero when the rotary encoder is clicked.

## Hardware Requirements

- STM32F4 microcontroller board (using a Black Pill)
- KY-040 style rotary encoder module
- 7-segment display

## Software Setup

1. **Encoder Pins**: Define the encoder pins (clock and data) according to the silkscreen on the encoder module.
2. **LED Pin**: Optionally, define an LED pin for visual feedback.
3. **Encoder Count**: Initialize a volatile variable to keep track of the encoder count.

## Code Overview

- **Encoder Reading**: Implement a function to read the encoder's state and update the count accordingly.
- **Display Update**: Update the 7-segment display to reflect the current count value.
- **Click Reset**: Implement functionality to reset the count to zero when the rotary encoder is clicked.

## Code Implementation


