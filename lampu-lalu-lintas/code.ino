#define red 2
#define yellow 3
#define green 4
#define blue 5

void setup() {
  Serial.begin(9600);  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.println("Setup selesai.");
}

void loop() {
  Serial.println("Lampu merah menyala, tolong berhenti.");
  digitalWrite(red, HIGH);
  delay(10000);

  Serial.println("Lampu hijau menyala, silahkan jalan.");
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(6000); 

  Serial.println("Lampu kuning menyala, silahkan jalan pelan pelan.");
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);

}
