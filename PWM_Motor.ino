int PIN = 3;
// int val = 0;


void setup() {
  // put your setup code here, to run once:
  // pinMode(2,OUTPUT);

  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(2,HIGH);
  // delay(1000);
  // digitalRead(2);
  // digitalWrite(2,!digitalRead);
  // delay(1000);

  for(int i = 80; 80<=i<=255; i++){
  analogWrite(PIN, i);
  Serial.println(i);
  delay(100);
  }
}
