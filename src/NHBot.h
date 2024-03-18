#ifndef NHBot_h
#define NHBot_h
#include "Arduino.h"

#define sv1 25
#define sv2 33
#define sv3 32
#define sv4 15

void sserial(const char *format, ...);
void sleep(int duration);
void wait_OK();

//---- Motor Functions ----//
void NHSetup();
void motor(int speed_A, int speed_B, int duration);
//------------------------//

//---- IO functions ----//
int analog(int pin);
int digital(int pin);
//----------------------//

//---- Servo function ----//
void servo(int pin, int degree);
//----------------------//


#endif
