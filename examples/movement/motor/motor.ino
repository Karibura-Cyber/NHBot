#include <NHBot.h>


void setup(){
    NHSetup(); // Use for enable a motor control
    wait_OK();
}

void loop(){
    motor(255, 255); //MotorA speed 255 (Full speed) and MotorB speed 255 (Full speed)
    sleep(1000); // Duration 1 second
}