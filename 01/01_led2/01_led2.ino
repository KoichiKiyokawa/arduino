const int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inputchar = Serial.read();
  if (inputchar != -1) {
    switch (inputchar) {
      case 'o':
        Serial.println("LED ON");
        digitalWrite(LED, HIGH);
        break;
      case 'p':
        Serial.println("LED OFF");
        digitalWrite(LED, LOW);
        break;
      }
  }
}
