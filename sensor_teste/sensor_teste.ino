const int sensor = A5;
const int led = 11;
int luz = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  luz = analogRead(sensor);

  if (luz < 40){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);

}
