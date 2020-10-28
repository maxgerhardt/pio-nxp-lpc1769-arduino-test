#include <Arduino.h>

/* LED on P0.15 */
#define BLINKY_PIN P0_01

void setup() { 
    /* start UART0 on 115200 baud*/
    Serial.begin(115200);
    Serial.println("Hello from Arduino firmware!");
    /* set blinky pin as output */
    pinMode(BLINKY_PIN, OUTPUT);
}
void loop() {
    digitalWrite(BLINKY_PIN, LOW);
    delay(500);
    digitalWrite(BLINKY_PIN, HIGH);
    delay(500);
    Serial.println("Blinky..");
}
