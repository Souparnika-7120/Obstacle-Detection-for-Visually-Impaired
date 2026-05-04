#include <NewPing.h>

#define TRIGGER_PIN 32
#define ECHO_PIN 33
#define MAX_DISTANCE 200
#define BUZZER_PIN 2

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup(){
  Serial.begin(9600);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop(){
  unsigned int distance = sonar.ping_cm();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance > 0 && distance < 20){
    digitalWrite(BUZZER_PIN, HIGH);  // buzzer ON
  }
  else{
    digitalWrite(BUZZER_PIN, LOW);   // buzzer OFF
  }

  delay(200);   // small delay for stability
}
