//master.ino

void setup() {
pinMode(10,OUTPUT);   
pinMode(11,OUTPUT);  
pinMode(12,OUTPUT); 
pinMode(13,OUTPUT);   
Serial.begin(9600);
}

void loop() {

  Serial.println("R");
  digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  delay(100);
  

  Serial.println("L");
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);
  delay(100);


  Serial.println("J");
  digitalWrite(10,HIGH);
  delay(800);
  digitalWrite(10,LOW);
  delay(100);

 
  Serial.println("K");
  digitalWrite(11,HIGH);
  delay(800);
  digitalWrite(11,LOW);
  delay(100);

  Serial.println("F");
  digitalWrite(12, HIGH);
  digitalWrite(10, 100);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(100);

  Serial.println("B");
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(100);
}
