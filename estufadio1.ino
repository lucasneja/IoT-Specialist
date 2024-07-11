// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while (analogRead(A0) > 1) {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    Serial.println((-40 + 0.488155 * (analogRead(A0) - 20)));
    if ((-40 + 0.488155 * (analogRead(A0) - 20)) >= 30) {
      digitalWrite(2, HIGH);
    }
    if ((-40 + 0.488155 * (analogRead(A0) - 20)) >= 50) {
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}