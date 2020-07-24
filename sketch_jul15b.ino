void setup() {
  pinMode (16,OUTPUT);
  pinMode (1,OUTPUT);
  pinMode (4,OUTPUT);
  
}

void loop() {
  digitalWrite (16,HIGH);
  delay(2000);
  digitalWrite (1,HIGH);
  delay(2000);
  digitalWrite (4,HIGH);
  delay(2000);
  digitalWrite (16,LOW);
  delay(3000);
  digitalWrite (1,LOW);
  delay(3000);
}
