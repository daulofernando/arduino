const int pinoLDR = A0;
const int pinoLED = 11;
int leitura = 0;

void setup() {
  // put your setup code here, to run once:
    pinMode(pinoLDR, INPUT);
    pinMode(pinoLED, OUTPUT);

  }

void loop() {
  // put your main code here, to run repeatedly:
  leitura = analogRead(pinoLDR);

  if (leitura < 40){
    digitalWrite(pinoLED, HIGH);
  }else{
    digitalWrite(pinoLED, LOW);
  }
  delay(1000);
  if (pinoLED, HIGH){
    leitura=0;
  } else {
    leitura = 100;
  }
}
