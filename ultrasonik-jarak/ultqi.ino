#include <NewPing.h>

#define red 3
#define green 2
#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int cek = sonar.ping_cm();
  Serial.print("Jarak: ");
  Serial.print(cek);
  Serial.println(" cm");

   if (cek >= 20 && cek <= 50) {
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW); 

  } else if (cek <= 20 && cek >= 5) {
      digitalWrite(green, HIGH);
      digitalWrite(red, LOW); 

  } else {
      digitalWrite(red, LOW); 
      digitalWrite(green, LOW);
  }
  delay(500);                    
}
