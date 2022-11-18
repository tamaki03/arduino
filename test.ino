
#include <Servo.h> // Thư viện điều khiển servo
#include <LiquidCrystal.h>
//Khởi tạo với các chân
LiquidCrystal lcd(A4, A2, 13, 12, 11, 10);
Servo myservo;// giao thong o pho di bo
int red1=7,yellow1=2,green1=3;
int red2=4,yellow2=5,green2=6;
int coi=8;
int quangtro = A5;
int servoPin = 9;
int pos = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  myservo.attach(servoPin); 
  pinMode(coi, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(green1, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("TIN HIEU !");

}

// the loop function runs over and over again forever
void loop() {
  
  int value =0;


  int gtquangtro = analogRead(quangtro);// đọc giá trị quang trở
  lcd.setCursor(0, 1);

  Serial.println(gtquangtro);
  lcd.print("   Arduino.VN");

    // bat den khi troi sang
    
  if(gtquangtro>170){
    fenceopen();
    changelight();
  }
  else {
      
      if(pos!=180){
        Serial.println("cong da bi dong");
        
      }
      else Serial.println("cong chuan bi dong");
      fenceclose();
  }

}

void fenceopen(){
  if(pos!=180){
    for(pos=0; pos < 180; pos += 1){ 

        myservo.write(pos);
        digitalWrite(coi,HIGH );
        delay(15);
        digitalWrite(coi,LOW );
    }
  }else{}
  
  
}
void fenceclose(){
    if(pos != 0){
      for(pos;  pos>=1; pos -= 1){ 

        myservo.write(pos);
        digitalWrite(coi,HIGH );
        delay(15);
        digitalWrite(coi,LOW );

      }
    }
    else{}
    
  
  
}



void changelight(){
  // bat 2 den vang
  digitalWrite(yellow1,LOW );
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,LOW);
    digitalWrite(red1,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(1300);

  // tat den vang bat den xanh2 va do1
  digitalWrite(yellow1,LOW );
  digitalWrite(yellow2,LOW);
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  delay(2000);

  // bat 2 den vang
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(2000);

  // tat 2 den vang , bat xanh 1 red 2
  digitalWrite(yellow1,LOW );
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(green1,HIGH);
  delay(2000);
  digitalWrite(red2,LOW);
  digitalWrite(green1,LOW);
  // bat 2 den vang
  digitalWrite(yellow1,LOW );
  digitalWrite(yellow2,LOW);
  digitalWrite(red2,LOW);
    digitalWrite(red1,LOW);
  digitalWrite(yellow1,HIGH);
  digitalWrite(yellow2,HIGH);
  delay(1300); 
}
