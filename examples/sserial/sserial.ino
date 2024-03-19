#include <NHNano.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
    sserial("A0: %d | D1: %d\n", analog(A0), digital(A1));
    delay(10);
}
