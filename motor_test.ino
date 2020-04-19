#define Left_IN1 PB13
#define Left_IN2 PB12
#define Left_PWM PB8

void setup() {
  pinMode(Left_IN1, OUTPUT);
  pinMode(Left_IN2, OUTPUT);
  pinMode(Left_PWM, OUTPUT);
}

void loop() {
  digitalWrite(Left_IN1, HIGH);
  digitalWrite(Left_IN1, LOW);
  analogWrite(Left_PWM, 100);
  delay(1000);
  digitalWrite(Left_IN1, LOW);
  digitalWrite(Left_IN1, HIGH);
  analogWrite(Left_PWM, 100);
  delay(1000);
}
