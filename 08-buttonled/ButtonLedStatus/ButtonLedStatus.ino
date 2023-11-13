byte button=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool btnStatus;
  btnStatus=digitalRead(button);
  digitalWrite(LED_BUILTIN, btnStatus);

}
