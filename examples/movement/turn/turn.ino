#include <NHBot.h>

void setup(){
    NHSetup();
    wait_OK();
}

void loop(){
    sl(255); sleep(1000);       // Spin Left full speed 1 second
    ao(); sleep(1000);          // Stop motor 1 second
    sr(255); sleep(1000);       // Spin Right full speed 1 second
    ao(); sleep(1000);          // Stop motor 1 second
    tl(255); sleep(1000);       // Turn Left full speed 1 second
    ao(); sleep(1000);          // Stop motor 1 second
    tr(255); sleep(1000);       // Turn Right full speed 1 second
    ao(); sleep(1000);          // Stop motor 1 second
}