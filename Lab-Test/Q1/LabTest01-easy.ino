const int BUTTON1 = PC13;
const int BUTTON2 = PC13;
const int LED = PB0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(BUTTON1) == LOW) && (digitalRead(BUTTON2) == LOW) ){

    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }

}
