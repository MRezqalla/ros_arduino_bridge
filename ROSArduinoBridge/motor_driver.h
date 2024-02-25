/***************************************************************
   Motor driver function definitions - by James Nugen
   Added motor driver function for POLOLU_MD07A - by Mohammad Rezqalla
   *************************************************************/
//
//#ifdef L298_MOTOR_DRIVER
//  #define RIGHT_MOTOR_BACKWARD 5
//  #define LEFT_MOTOR_BACKWARD  6
//  #define RIGHT_MOTOR_FORWARD  9
//  #define LEFT_MOTOR_FORWARD   10
//  #define RIGHT_MOTOR_ENABLE 12
//  #define LEFT_MOTOR_ENABLE 13
//#endif

//Although a single output motor driver, I am using two so I'm defining both in "one"
#ifdef POLOLU_MD07A
  #define RIGHT_MOTOR_DIR 12
  #define LEFT_MOTOR_DIR  13
  #define RIGHT_MOTOR_PWM 9
  #define LEFT_MOTOR_PWM 10
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
