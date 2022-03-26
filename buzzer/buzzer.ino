int freq = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  tone(13, freq);
  delay(500);
  noTone(13);
  delay(500);
}
