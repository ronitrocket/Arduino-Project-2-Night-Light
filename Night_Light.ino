int sensePin = 0;
int ledPin = 9;

void setup() {
  
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int val = analogRead(sensePin);
  
  if (val < 1018) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);
  
  Serial.println(analogRead(sensePin));
}
