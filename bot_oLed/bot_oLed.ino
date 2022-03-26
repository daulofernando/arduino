void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT); //led
  pinMode(12, INPUT); //botão

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(12) == HIGH){ //caso o botão seja pressionado ligue o led
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW); // caso contrario desligue o led
  }
  
}
