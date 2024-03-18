#include <NHBot.h>

void setup() {
    wait_OK();
}
void loop() {
    servo(sv1, 0); delay(1000);
    servo(sv1, 180); delay(1000);
}