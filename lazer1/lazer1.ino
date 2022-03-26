const int sensor = A0;
int leitura = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(sensor, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  leitura = analogRead(sensor);

  Serial.print("Leitura: " );
  Serial.print(leitura);
  Serial.print("\t");

  Serial.print("Obstaculo: ");
  if (leitura <=512){
    Serial.print("Sim");
  } else {
    Serial.print("Não");
  }
    Serial.println();
    delay(500);
}
