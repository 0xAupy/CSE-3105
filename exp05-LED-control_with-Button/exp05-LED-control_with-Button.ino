const int BUTTON = PC13;
const int LED = PB0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == LOW){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }

}
