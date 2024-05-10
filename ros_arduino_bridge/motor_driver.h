/***************************************************************
   Motor driver function definitions - by Mohit Kumar Gupta
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  //below can be changed
  #define LEFT_MOTOR_ENABLE 4
  #define LEFT_MOTOR_FORWARD 12
  #define LEFT_MOTOR_BACKWARD 11
  #define RIGHT_MOTOR_FORWARD 6
  #define RIGHT_MOTOR_BACKWARD 7
  #define RIGHT_MOTOR_ENABLE 5
  
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
