void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
Serial.beigin("9600")
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(8));

}
