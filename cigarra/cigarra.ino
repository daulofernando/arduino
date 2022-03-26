const int buz = 13;
const int btn = 12;
const int led = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(buz, OUTPUT);
pinMode(btn, INPUT_PULLUP);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

bool estado = digitalRead(btn);
  
if (digitalRead(btn)==LOW){
  tone(buz, 1000);
  digitalWrite(led, HIGH);
} else {
  noTone(buz);
  digitalWrite(led, LOW);
}

delay(10);


}
