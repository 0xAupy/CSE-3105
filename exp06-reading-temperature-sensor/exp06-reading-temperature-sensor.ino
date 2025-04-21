const int RLED = PB0;
const int GLED = PB1;
const int BLED = PB6;

const int TEMP = PA0;

const int LOWER_BOUND = 139;
const int UPPER_BOUND = 147;

int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(TEMP, INPUT);

  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(TEMP);

  if(val < LOWER_BOUND){ //LED is blue
  digitalWrite(RLED, HIGH);
  digitalWrite(GLED, HIGH);
  digitalWrite(BLED, LOW);
  }
  else if(val > UPPER_BOUND){ //LED is red
    digitalWrite(RLED, LOW);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, HIGH);
  }
  else{
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, LOW);
    digitalWrite(BLED, HIGH);
  }

}
