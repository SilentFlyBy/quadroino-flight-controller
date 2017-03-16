#ifndef ATM_328P_H_
#define ATM_328P_H

#include <avr/io.h>

#ifndef PINS_H_
#define PINS_H_

#define MOTOR_DDR       DDRD
#define MOTOR_PORT      PORTD

#define INPUT_DDR       DDRB
#define INPUT_PORT      PORTB

#define MOTOR_F_L       0b00010000
#define MOTOR_F_R       0b00100000
#define MOTOR_R_L       0b01000000
#define MOTOR_R_R       0b10000000

#define INPUT_PITCH     0b00000001
#define INPUT_ROLL      0b00000010
#define INPUT_YAW       0b00000100
#define INPUT_THROTTLE  0b00001000

#endif

#endif
