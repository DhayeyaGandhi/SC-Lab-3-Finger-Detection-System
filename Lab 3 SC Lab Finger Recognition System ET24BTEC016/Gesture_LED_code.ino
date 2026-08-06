#include <Servo.h>
Servo myservo;
String command;

int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5; 
int L5 = 6;
int S = 9;

void setup() { 
  Serial.begin(9600);
  myservo.attach(S);  
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');

    if (command == "one") {
      myservo.write(20);
      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      Serial.println("Set pins as 'one'");
    } 
    else if (command == "two") {
      myservo.write(60);
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      Serial.println("Set pins as 'two'");
    } 
    else if (command == "three") {
      myservo.write(100);
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      Serial.println("Set pins as 'three'");
    }
    else if (command == "four") {
      myservo.write(140);
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, LOW);
      Serial.println("Set pins as 'four'");
    } 
    else if (command == "five") {
      myservo.write(180);
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, HIGH);
      digitalWrite(L5, HIGH);
      Serial.println("Set pins as 'five'");
    } 
    else if (command == "alloff") {
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      digitalWrite(L5, LOW);
      myservo.write(0);
      Serial.println("Set pins as 'alloff'");
    } 
    else {
      Serial.println("Invalid command");
    }
  }
}