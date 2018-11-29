const int LED = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char inputChar = Serial.read();
  if (inputChar != -1) {
    switch (inputChar) {
      case 'o':
        analogWrite(LED, 20);
        delay(10);
        break;
      case 'p':
        analogWrite(LED, 255);
        delay(10);
        break;
      default:
    }
  }

}