/***************************************************************
   Motor driver function definitions - by James Nugen
   Adapted for Arduino Motor shield by Jmarquette14 
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 12
  #define LEFT_MOTOR_BACKWARD  13
  #define RIGHT_MOTOR_FORWARD  3
  #define LEFT_MOTOR_FORWARD   11
  #define RIGHT_MOTOR_ENABLE 9
  #define LEFT_MOTOR_ENABLE 8
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
