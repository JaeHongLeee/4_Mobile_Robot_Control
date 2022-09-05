#include <MPU9250_asukiaaa.h> //IMUsensor library

#ifndef Motor_move_h
#define Motor_move_h

#include "Arduino.h"

//Motor move class
class Motor_move {
  private:
  
  public:
    //car move method
    void forward_move();
    void back_move();

    //PWM move method
    
};

//Interrupt Class
class InterruptLibrary {
  private:
 
  public:
    //Hardware Interrupt
    void encoder_A0();
    void encoder_B0();
    void encoder_A1();
    void encoder_B1();
    void encoder_A2();
    void encoder_B2();
    void encoder_A3();
    void encoder_B3();

    //Timer Interrupt
    void interrupt_setup();    
};

//Move Show Class
class Move_show {
   
   public: 
    void motor_show_status();
    void speed_status();
    
};
#endif
