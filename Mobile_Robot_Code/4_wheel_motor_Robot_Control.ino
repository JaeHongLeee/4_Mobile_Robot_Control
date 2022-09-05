#include "Motor_move.h"

#define CONTROL_PERIOD 50000 //50ms

//Pin number setting
#define encoder_A0 20
#define encoder_B0 21
#define encoder_A1 18
#define encoder_B1 19
#define encoder_A2 16
#define encoder_B2 17
#define encoder_A3 14
#define encoder_B3 15
#define PWM_0 4
#define dir_0 5
#define PWM_1 6
#define dir_1 7
#define PWM_2 8
#define dir_2 9
#define PWM_3 10
#define dir_3 11

//PWM Channel Setting
#define LEDC_TIMER_13_BIT 8      //8bit,   2^8-1 = calculate duty 255
#define LEDC_BASE_FREQ 5000

//encoder setting
InterruptLibrary encoder_RA;
InterruptLibrary encoder_RB;
InterruptLibrary encoder_LA;
InterruptLibrary encoder_LB;

//Setup method
void setup() {
  InterruptLibrary timer_1;       //Timer Interrupt

  //Motor Move Setting
  pinMode(PWM_0, OUTPUT);
  pinMode(dir_0, OUTPUT);
  pinMode(PWM_1, OUTPUT);
  pinMode(dir_1, OUTPUT);
  pinMode(PWM_2, OUTPUT);
  pinMode(dir_2, OUTPUT);
  pinMode(PWM_3, OUTPUT);
  pinMode(dir_3, OUTPUT);
  
  //Encoder Setting
  pinMode(encoder_A0, INPUT);
  pinMode(encoder_B0, INPUT);
  pinMode(encoder_A1, INPUT);
  pinMode(encoder_B1, INPUT);
  pinMode(encoder_A2, INPUT);
  pinMode(encoder_B2, INPUT);
  pinMode(encoder_A3, INPUT);
  pinMode(encoder_B3, INPUT);
  
  //Hardware Interrupt Setting
  attachInterrupt(20, CHANGE);


  //PWM pin Setting
  ledcSetup(0, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  ledcAttachPin(motorB2, 0);
  ledcSetup(1, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  ledcAttachPin(motorB1, 1);
  ledcSetup(2, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  ledcAttachPin(motorA2, 2);
  ledcSetup(3, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  ledcAttachPin(motorA1, 3);
  
  timer_1.interrupt_setup();      //Timer Interrupt

  //Serial Print Start
  Serial.begin(74880);
}

void loop() {
  //Motor Control 부분
  Move_show show1;
  Move_show motor_input;

  //motor_input.speed_status();
  //show1.motor_show_status();

 
}
