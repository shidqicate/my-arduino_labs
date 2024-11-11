#define t   30
#define t1  20
#define t2  100
#define t3  50

void setup() {
  Serial.begin(9600);
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  effect_1(); 
  effect_2(); 
  effect_3(); 
  effect_4(); 
  effect_5(); 
  effect_6(); 
  effect_7(); 
  effect_8();
  effect_9();
  effect_10();
  effect_11();
  effect_12();
  effect_13();
  effect_14();
  effect_15();
  effect_16();
  effect_17();
  effect_18();
  effect_19();
  effect_20();
  effect_21();
  effect_22();
}

void effect_1() {
  Serial.println("Efek 1");
  for(int i = 2; i < 14; i++) {
    digitalWrite(i, HIGH); delay(t1);
    digitalWrite(i + 1, HIGH); delay(t1);
    digitalWrite(i + 2, HIGH); delay(t1);
    digitalWrite(i, LOW); delay(t1);
    digitalWrite(i + 1, LOW); delay(t1);
  }
  for(int i = 13; i > 1; i--) {
    digitalWrite(i, HIGH); delay(t1);
    digitalWrite(i - 1, HIGH); delay(t1);
    digitalWrite(i - 2, HIGH); delay(t1);
    digitalWrite(i, LOW); delay(t1);
    digitalWrite(i - 1, LOW); delay(t1);
  }
}

void effect_2() {
  Serial.println("Efek 2");
  int count = 13;
  for (int i = 2; i < 13; i++) {
    clear();
    digitalWrite(i, HIGH);
    digitalWrite(count, HIGH);
    count--;
    if (count != 7) delay(t2);
  }
  for (int i = 13; i > 2; i--) {
    clear();
    digitalWrite(i, HIGH);
    digitalWrite(count, HIGH);
    count++;
    if (count != 8) delay(t2);
  }
}

void effect_3() {
  Serial.println("Efek 3");
  for(int i = 2; i < 14; i++) {
    digitalWrite(i, HIGH); delay(t3);
  }
  for(int i = 2; i < 14; i++) {
    digitalWrite(i, LOW); delay(t3);
  }
  for(int i = 14; i >= 2; i--) {
    digitalWrite(i, HIGH); delay(t3);
  }
  for(int i = 14; i >= 2; i--) {
    digitalWrite(i, LOW); delay(t3);
  }
}

void effect_4() {
  Serial.println("Efek 4");
  for(int j = 2; j <= 13; j += 2) {
    digitalWrite(j, HIGH); delay(t2);
  }
  for(int j = 2; j <= 13; j += 2) {
    digitalWrite(j, LOW); delay(t2);
  }
  for(int k = 13; k >= 2; k -= 2) {
    digitalWrite(k, HIGH); delay(t2);
  }
  for(int k = 13; k >= 2; k -= 2) {
    digitalWrite(k, LOW); delay(t2);
  }
}

void effect_5() {
  Serial.println("Efek 5");
  for(int pin = 13; pin >= 2; pin--) {
    for(int offset = 0; offset <= 6; offset++) {
      digitalWrite(pin + offset, HIGH); delay(t1);
      digitalWrite(pin + offset + 1, LOW); delay(t1);
    }
  }
}

void effect_6() {
  Serial.println("Efek 6");
  for(int j = 2; j < 14; j++) {
    digitalWrite(j, LOW); delay(t);
    digitalWrite(j, HIGH); delay(t);
  }
  for(int k = 15; k > 2; k--) {
    digitalWrite(k, LOW); delay(t);
    digitalWrite(k, HIGH); delay(t);
  }
}

void effect_7() {
  Serial.println("Efek 7");
  for(int j = 2; j < 14; j++) {
    digitalWrite(j, HIGH); delay(t);
    digitalWrite(j + 2, LOW); delay(t);
  }
  for(int k = 15; k > 2; k--) {
    digitalWrite(k, HIGH); delay(t);
    digitalWrite(k + 2, LOW); delay(t);
  }
}

void effect_8() {
  Serial.println("Efek 8");
  for (int i = 2; i <= 12; i += 2) {
    digitalWrite(i, HIGH); digitalWrite(i + 1, HIGH); delay(t2);
    digitalWrite(i, LOW); digitalWrite(i + 1, LOW); delay(t2);
  }
  for (int i = 12; i >= 2; i -= 2) {
    digitalWrite(i, HIGH); digitalWrite(i - 1, HIGH); delay(t2);
    digitalWrite(i, LOW); digitalWrite(i - 1, LOW); delay(t2);
  }
}

void effect_9() {
  Serial.println("Efek 9");
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, HIGH); delay(t1);
  }
  for (int i = 13; i >= 2; i--) {
    digitalWrite(i, LOW); delay(t1);
  }
}

void effect_10() {
  Serial.println("Efek 10");
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, HIGH); delay(t1);
  }
  delay(t3 * 2);
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, LOW); delay(t1);
  }
}

void effect_11() {
  Serial.println("Efek 11");
  for (int i = 0; i < 50; i++) {
    int randLED = random(2, 14);
    digitalWrite(randLED, HIGH); delay(t1);
    digitalWrite(randLED, LOW); delay(t1);
  }
}

void effect_12() {
  Serial.println("Efek 12");
  for (int i = 2; i <= 13; i++) {
    for (int brightness = 0; brightness <= 255; brightness += 5) {
      analogWrite(i, brightness); delay(5);
    }
    for (int brightness = 255; brightness >= 0; brightness -= 5) {
      analogWrite(i, brightness); delay(5);
    }
  }
  
}
void effect_13() {
  Serial.println("Efek 13");
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, HIGH);
    delay(t2);
    digitalWrite(i, LOW);
  }
  for (int i = 13; i >= 2; i--) {
    digitalWrite(i, HIGH);
    delay(t2);
    digitalWrite(i, LOW);
  }
}

void effect_14() {
  Serial.println("Efek 14");
  for (int i = 2; i <= 13; i++) {
    for (int brightness = 0; brightness <= 255; brightness += 5) {
      analogWrite(i, brightness);
      delay(10);
    }
    for (int brightness = 255; brightness >= 0; brightness -= 5) {
      analogWrite(i, brightness);
      delay(10);
    }
  }
}

void effect_15() {
  Serial.println("Efek 15");
  for (int i = 2; i < 13; i += 2) {
    digitalWrite(i, HIGH);
    digitalWrite(i + 1, HIGH);
    delay(t1);
    digitalWrite(i, LOW);
    digitalWrite(i + 1, LOW);
    delay(t1);
  }
}

void effect_16() {
  Serial.println("Efek 16");
  for (int i = 2; i < 13; i++) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }
  for (int i = 13; i > 2; i--) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }
}

void effect_17() {
  Serial.println("Efek 17");
  int center = 7;  
  for (int i = 0; i < 6; i++) {
    digitalWrite(center + i, HIGH);
    digitalWrite(center - i, HIGH);
    delay(t2);
    digitalWrite(center + i, LOW);
    digitalWrite(center - i, LOW);
  }
}

void effect_18() {
  Serial.println("Efek 18");
  for (int i = 0; i < 10; i++) {
    for (int j = 2; j <= 13; j += 2) {
      digitalWrite(j, HIGH);
    }
    delay(t1);
    for (int j = 3; j <= 13; j += 2) {
      digitalWrite(j, HIGH);
    }
    delay(t1);
    clear();
  }
}

void effect_19() {
  Serial.println("Efek 19");
  for (int i = 0; i < 50; i++) {
    int randLED = random(2, 14);
    digitalWrite(randLED, HIGH);
    delay(t1);
    digitalWrite(randLED, LOW);
  }
}

void effect_20() {
  Serial.println("Efek 20");
  for (int i = 0; i <= 5; i++) {
    digitalWrite(7 + i, HIGH);
    digitalWrite(7 - i, HIGH);
    delay(t2);
  }
  for (int i = 5; i >= 0; i--) {
    digitalWrite(7 + i, LOW);
    digitalWrite(7 - i, LOW);
    delay(t2);
  }
}
void effect_21() {
  Serial.println("Efek 21");
  for (int i = 0; i < 100; i++) {  
    int randLED1 = random(2, 14);   
    int randLED2 = random(2, 14);   

    digitalWrite(randLED1, HIGH);   
    digitalWrite(randLED2, HIGH);  
    delay(t1 / 2);                  

    digitalWrite(randLED1, LOW);    
    digitalWrite(randLED2, LOW);    
    delay(t1 / 2);                  
  }
  clear(); 
}
void effect_22() {
  Serial.println("Efek 22");
  for (int i = 0; i < 50; i++) {  
    for (int j = 0; j < 5; j++) {  
      int randLED = random(2, 14);
      digitalWrite(randLED, HIGH);
    }
    delay(t1 / 3);  

    clear();     
    delay(t1 / 3); 
  }
}

void clear() {
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
}
