// Include the pins used for the relays
const int PANTRY = 2;
const int GARAGE1 = 7;
const int GARAGE2 = 8;
const int unused = 10;

// PIR Sensors
const int PIRPANT = 4;
const int PIRGAR1 = 5;
const int PIRGAR2 = 6;

void setup() {
  pinMode(PANTRY, OUTPUT);
  pinMode(GARAGE1, OUTPUT);
  pinMode(GARAGE2, OUTPUT);
  pinMode(PIRPANT, INPUT);
  pinMode(PIRGAR2, INPUT);
  pinMode(PIRGAR1, INPUT);
}

void loop() {
  digitalWrite(PANTRY,digitalRead(PIRPANT));
  if (digitalRead(PIRGAR1) == HIGH || digitalRead(PIRGAR2) == HIGH) {
    digitalWrite(GARAGE1, HIGH);
    digitalWrite(GARAGE2, HIGH);
  }
  else {
    digitalWrite(GARAGE1, LOW);
    digitalWrite(GARAGE2, LOW);
  }
}
