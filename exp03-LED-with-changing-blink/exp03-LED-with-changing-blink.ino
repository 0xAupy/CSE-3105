void setup() {
  // put your setup code here, to run once:
  pinMode(PC13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 100; i <= 1000; i+=100){
    digitalWrite(PC13, HIGH);
    delay(i);

    digitalWrite(PC13, LOW);
    delay(i);
  }

}
