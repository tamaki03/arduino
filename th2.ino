int a=0,b=1,c=2,d=3,e=4,f=5,g=6,dp=7;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(a, LOW);
  digitalWrite(c, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(c, LOW);
  digitalWrite(f, HIGH);   
  delay(100);
  digitalWrite(f, LOW);
  digitalWrite(e, HIGH);   
  delay(100);
  digitalWrite(e, LOW);
  digitalWrite(b, HIGH);   
  delay(100);
  digitalWrite(b, LOW);
  digitalWrite(d, HIGH);   
  delay(100);
  digitalWrite(d, LOW);
  digitalWrite(g, HIGH);   
  delay(100);
  digitalWrite(g, LOW);
  delay(300);
  // nhay tu 1-> 0
  //1
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(300);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  delay(300);
  
  //2
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  delay(300);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  delay(300);
  //3
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(300);
    digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(1000);
  // ILU
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(1000);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  delay(1000);
  //L
  digitalWrite(f,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  delay(1000);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  delay(1000);
  //U
  digitalWrite(f,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(1000);
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  
  delay(1000);
  
  
}
