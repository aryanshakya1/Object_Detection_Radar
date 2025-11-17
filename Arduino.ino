// Includes the Servo library
#include <Servo.h>

// Ultrasonic Sensor pins
const int trigPin = 10;
const int echoPin = 11;

// LED pin
const int ledPin = 9;   // You can change this to your LED pin

// Variables
long duration;
int distance;

Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);  // Set LED pin as output

  Serial.begin(9600);

  myServo.attach(12);
}

void loop() {

  // Rotate servo 15° → 165°
  for(int i = 15; i <= 165; i++) {
    myServo.write(i);
    delay(30);

    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");

    controlLED(distance);   // LED logic based on object detection
  }

  // Rotate servo 165° → 15°
  for(int i = 165; i > 15; i--) {
    myServo.write(i);
    delay(30);

    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");

    controlLED(distance);   // LED logic based on object detection
  }
}

// Function to calculate distance
int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}

// NEW FUNCTION – Turn ON/OFF LED
void controlLED(int distance) {
  int threshold = 20; // object detected within 20 cm

  if (distance > 0 && distance <= threshold) {
    digitalWrite(ledPin, HIGH);   // LED ON
  } else {
    digitalWrite(ledPin, LOW);    // LED OFF
  }
}
