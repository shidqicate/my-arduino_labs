// WALLFOLLOWER
#define TRIG_PIN_LEFT D1
#define ECHO_PIN_LEFT D2
#define TRIG_PIN_RIGHT D3
#define ECHO_PIN_RIGHT D4

#define IN1 D5
#define IN2 D6
#define IN3 D7
#define IN4 D8

const int motorSpeed = 80; 
const int batasJarak = 15;  
const int toleransi = 5;    // Toleransi untuk menghindari perubahan arah terlalu sering

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2; // Menghitung jarak dalam cm
  return distance;
}

// Fungsi untuk mengontrol motor
// mobil stop
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
// mobil maju
void moveForward() {
  analogWrite(IN1, motorSpeed);
  digitalWrite(IN2, LOW);
  analogWrite(IN3, motorSpeed);
  digitalWrite(IN4, LOW);
}
// mobil mundur
void moveBackward() {
  digitalWrite(IN1, LOW);
  analogWrite(IN2, motorSpeed);
  digitalWrite(IN3, LOW);
  analogWrite(IN4, motorSpeed);
}
// mobil belok kiri
void turnLeft() {
  analogWrite(IN1, motorSpeed);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  analogWrite(IN4, motorSpeed);
}
// mobil belok kanan
void turnRight() {
  digitalWrite(IN1, LOW);
  analogWrite(IN2, motorSpeed);
  analogWrite(IN3, motorSpeed);
  digitalWrite(IN4, LOW);
}

void setup() {
  pinMode(TRIG_PIN_LEFT, OUTPUT);
  pinMode(ECHO_PIN_LEFT, INPUT);
  pinMode(TRIG_PIN_RIGHT, OUTPUT);
  pinMode(ECHO_PIN_RIGHT, INPUT);
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // langkah awal mobil akan di set stop
  stopMotors();
}

void loop() {
  long distanceLeft = getDistance(TRIG_PIN_LEFT, ECHO_PIN_LEFT);
  long distanceRight = getDistance(TRIG_PIN_RIGHT, ECHO_PIN_RIGHT);

  // Logika robot wall follower
  if (distanceLeft < batasJarak && distanceRight < batasJarak) {
    // Kedua sensor melihat tembok terlalu dekat
    stopMotors();
    delay(500);
    moveBackward(); // Bergerak mundur dulu
    delay(700);     
    if (distanceLeft > distanceRight + toleransi) {
      // Belok ke arah yang lebih luas (kiri)
      turnLeft();
    } else if (distanceRight > distanceLeft + toleransi) {
      // Belok ke arah yang lebih luas (kanan)
      turnRight();
    }
    delay(500);     
  } else if (distanceLeft < batasJarak) {
    // Sensor kiri melihat tembok
    stopMotors();
    delay(500);
    moveBackward();
    delay(300);
    turnRight();
    delay(500);
  } else if (distanceRight < batasJarak) {
    // Sensor kanan melihat tembok
    stopMotors();
    delay(500);
    moveBackward();
    delay(300);
    turnLeft();
    delay(500);
  } else {
    // Tidak ada tembok, jalan maju
    moveForward();
  }

  delay(100); // Delay untuk stabilitas pembacaan
}
