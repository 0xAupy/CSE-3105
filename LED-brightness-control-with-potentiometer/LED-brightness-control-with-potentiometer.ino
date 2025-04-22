const int r = PA0;
const int g = PA2;
const int b = PA4;

const int btn = PA6;

int var = 0;
bool lastState = HIGH;
bool btnPressed = false;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

  pinMode(btn, INPUT_PULLUP);
}

void loop() {
  bool currentState = digitalRead(btn);
  
  if (lastState == HIGH && currentState == LOW) {
    var = (var + 1) % 8;
    setColor(var);
    btnPressed = false;
    delay(200);
  }

  lastState = currentState;
}

void setColor(int state) {
  digitalWrite(r, (state & 0b100) ? HIGH : LOW);
  digitalWrite(g, (state & 0b010) ? HIGH : LOW);
  digitalWrite(b, (state & 0b001) ? HIGH : LOW);
}