void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
}
void loop(){
  int timer=analogRead(A0);
  digitalWrite(2,HIGH);
  delay(timer); //wait for 1000 millisecond(s)
  digitalWrite(2,LOW);
  delay(timer); //wait for 1000 millisecond(s)
  
  digitalWrite(3,HIGH);
  delay(timer); //wait for 1000 millisecond(s)
  digitalWrite(3,LOW);
  delay(timer);
  
    digitalWrite(4,HIGH);
  delay(timer); //wait for 1000 millisecond(s)
  digitalWrite(4,LOW);
  delay(timer);
    
    digitalWrite(5,HIGH);
  delay(timer); //wait for 1000 millisecond(s)
  digitalWrite(5,LOW);
  delay(timer);
}