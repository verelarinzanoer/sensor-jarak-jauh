#include <HCSR04.h>

#define trigger 5 // D1
#define echo 4 // D2

HCSR04 distance(trigger, echo);

void setup() {
   Serial.begin(9600);
   
}

void loop() {
  float jarak = distance.dist();
  Serial.println(jarak);
  

}
