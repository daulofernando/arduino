void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(13, HIGH);
digitalWrite(12, LOW);
delay(150);
digitalWrite(12, HIGH);
digitalWrite(13, LOW);
delay(150);
digitalWrite(13, LOW);
digitalWrite(12, LOW);
delay(1000);

}
