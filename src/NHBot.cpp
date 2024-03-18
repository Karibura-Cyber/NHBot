#include "NHBot.h"
#include "ESP32Servo.h"

#define MOT_A1_PIN 12
#define MOT_A2_PIN 14
#define MOT_B1_PIN 27
#define MOT_B2_PIN 26

Servo sv;

void sserial(const char *format, ...) // Print serial in multiple value
{
  char buffer[1024];
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, sizeof(buffer), format, args);
  Serial.print(buffer);
  va_end(args);
}

int analog(int pin) { return analogRead(pin); }   // Get analog data from pin
int digital(int pin) { return digitalRead(pin); } // Get digital data from pin
void sleep(int duration) { delay(duration); }     // Time duration

void wait_OK(){
  pinMode(13, INPUT_PULLDOWN);
  while(!digitalRead(13));
  while(digitalRead(13));
}

void NHSetup()
{
  pinMode(MOT_A1_PIN, OUTPUT);
  pinMode(MOT_A2_PIN, OUTPUT);
  pinMode(MOT_B1_PIN, OUTPUT);
  pinMode(MOT_B2_PIN, OUTPUT);
  pinMode(13, INPUT_PULLDOWN);

  digitalWrite(MOT_A1_PIN, LOW);
  digitalWrite(MOT_A2_PIN, LOW);
  digitalWrite(MOT_B1_PIN, LOW);
  digitalWrite(MOT_B2_PIN, LOW);
}

void set_motor_pwm(int pwm, int IN1_PIN, int IN2_PIN)
{
  if (pwm < 0)
  { // reverse speeds
    analogWrite(IN1_PIN, -pwm);
    digitalWrite(IN2_PIN, LOW);
  }
  else
  { // stop or forward
    digitalWrite(IN1_PIN, LOW);
    analogWrite(IN2_PIN, pwm);
  }
}

void set_motor_currents(int pwm_A, int pwm_B)
{
  set_motor_pwm(pwm_A, MOT_A1_PIN, MOT_A2_PIN);
  set_motor_pwm(pwm_B, MOT_B1_PIN, MOT_B2_PIN);
}

void motor(int speed_A, int speed_B, int duration) //Motor speed control
{
  set_motor_currents(speed_A, speed_B);
  delay(duration);
}

void servo(int pin, int degree) //Servo control function
{
  sv.attach(pin);
  sv.write(degree);
}