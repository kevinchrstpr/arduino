void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(4000);
  digitalWrite(3, LOW);
  delay(400);
  digitalWrite(4, HIGH);
  delay(3000);
  digitalWrite(4, LOW);
  delay(300);
}
