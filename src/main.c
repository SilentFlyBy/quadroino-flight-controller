#include "quadroino.h"
#include "main.h"

void setup() {
  //set all motor pins as output
  MOTOR_DDR |= MOTOR_F_L | MOTOR_F_R | MOTOR_R_L | MOTOR_R_R;

  //set all input pins as input
  INPUT_DDR &= ~(INPUT_PITCH | INPUT_ROLL | INPUT_YAW | INPUT_THROTTLE);
}

void loop() {

}
