//slave.ino

char t;
 
void setup() {
pinMode(10,OUTPUT);   
pinMode(11,OUTPUT);  
pinMode(12,OUTPUT); 
pinMode(13,OUTPUT);   
Serial.begin(9600);
} 

void loop() {
 if(Serial.available() > 0){ 
    t = Serial.read(); 
 }
 
  if(t == 'R')
  {
  digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  delay(100);
  }
  else if(t == 'L')
  {
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);
  delay(100);
  }
  else if(t == 'J')
  {
  digitalWrite(10,HIGH);
  delay(800);
  digitalWrite(10,LOW);
  delay(100);
  }
  else if(t == 'K')
  {
  digitalWrite(11,HIGH);
  delay(800);
  digitalWrite(11,LOW);
  delay(100);
  }
  else if(t == 'F')
  {
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(100);
  }
  else if(t == 'B')
  {
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  }
  delay(100);
}
