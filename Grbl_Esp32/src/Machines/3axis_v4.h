#pragma once
// clang-format off

/*
    3axis_v4.h
    Part of Grbl_ESP32

    Pin assignments for the ESP32 Development Controller, v4.1 and later.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    2018    - Bart Dring
    2020    - Mitch Bradley

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACHINE_NAME            "ESP32_V4"

#define N_AXIS 3

#define TRINAMIC_UART_RUN_MODE       TrinamicUartMode :: StealthChop
#define TRINAMIC_UART_HOMING_MODE    TrinamicUartMode :: StallGuard

#define TMC_UART                UART_NUM_2
#define TMC_UART_RX             GPIO_NUM_16
#define TMC_UART_TX             GPIO_NUM_17   

// RADIUS_AXIS
#define X_TRINAMIC_DRIVER       2209
#define X_STEP_PIN              GPIO_NUM_33
#define X_DIRECTION_PIN         GPIO_NUM_32
#define X_RSENSE                0.11f
#define X_DRIVER_ADDRESS        0

#define DEFAULT_X_MICROSTEPS    16
#define DEFAULT_X_CURRENT       0.65
#define DEFAULT_X_HOLD_CURRENT  0.3
#define DEFAULT_X_STEPS_PER_MM  88.889
#define DEFAULT_X_MAX_RATE      2500.0 // mm/min
#define DEFAULT_X_ACCELERATION  200.0 // mm/sec^2. 200 mm/sec^2 = 720000 mm/min^2
#define DEFAULT_X_MAX_TRAVEL    250.0 // mm NOTE: Must be a positive value.
#define DEFAULT_X_STALLGUARD    1
#define DEFAULT_X_HOMING_MPOS   0.0

// POLAR_AXIS
#define Y_TRINAMIC_DRIVER       2209
#define Y_STEP_PIN              GPIO_NUM_26
#define Y_DIRECTION_PIN         GPIO_NUM_25
#define Y_RSENSE                0.11f
#define Y_DRIVER_ADDRESS        1

#define DEFAULT_Y_MICROSTEPS    16
#define DEFAULT_Y_CURRENT       0.50
#define DEFAULT_Y_HOLD_CURRENT  0.3
#define DEFAULT_Y_STEPS_PER_MM  197.530
#define DEFAULT_Y_MAX_RATE      4000.0 // mm/min
#define DEFAULT_Y_ACCELERATION  400.0 // mm/sec^2. 200 mm/sec^2 = 720000 mm/min^2
#define DEFAULT_Y_MAX_TRAVEL    360.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Y_STALLGUARD    8
#define DEFAULT_Y_HOMING_MPOS   0.0

#define X_LIMIT_PIN             GPIO_NUM_36
#define Y_LIMIT_PIN             GPIO_NUM_27
// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_4

//GRBL Configuration//

#define DEFAULT_STEP_PULSE_MICROSECONDS 3
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // stay on

#define DEFAULT_STEPPING_INVERT_MASK 0 // uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK 1 // uint8_t
#define DEFAULT_INVERT_ST_ENABLE 0 // boolean
#define DEFAULT_INVERT_LIMIT_PINS 0 // boolean
#define DEFAULT_INVERT_PROBE_PIN 0 // boolean

#define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled

#define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
#define DEFAULT_ARC_TOLERANCE 0.002 // mm
#define DEFAULT_REPORT_INCHES 0 // false

#define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
#define DEFAULT_HARD_LIMIT_ENABLE 0  // false

#define DEFAULT_HOMING_CYCLE_0      bit(X_AXIS)
#define DEFAULT_HOMING_CYCLE_1      bit(Y_AXIS)

#define DEFAULT_HOMING_ENABLE           1
#define DEFAULT_HOMING_DIR_MASK         1
#define DEFAULT_HOMING_FEED_RATE        2500.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE        3000.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY   250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF          2.5 // mm

#define SPINDLE_TYPE SpindleType::NONE