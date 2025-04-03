const int trigPin = 9;
const int echoPin = 10;

float duration, distance;
bool measuring = true;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    if (input == "stop") {
      measuring = false;
      Serial.println("Measurement stopped.");
    } else if (input == "start") {
      measuring = true;
      Serial.println("Measurement resumed.");
    }
  }

  if (measuring) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration * 0.0343) / 2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(1000);
  }
}
