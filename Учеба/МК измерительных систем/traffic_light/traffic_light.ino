//config
#define A 9
#define B 8
#define C 6
#define D 4
#define E 3
#define Fl 11
#define G 12

#define Green 5
#define Yellow 7
#define Red 13

void setup() {
  //подключение каждого сегмента
  pinMode (A, OUTPUT);  
  pinMode (B, OUTPUT);  
  pinMode (C,OUTPUT); 
  pinMode (D,OUTPUT);   
  pinMode (E,OUTPUT);  
  pinMode (Fl,OUTPUT);  
  pinMode (G,OUTPUT);
  //подключение светодиодов
  pinMode (Green,OUTPUT);  
  pinMode (Yellow,OUTPUT); 
  pinMode (Red,OUTPUT);  
}
void reset()
{
  
  digitalWrite (A,LOW);
  digitalWrite (B,LOW);
  digitalWrite (C,LOW);
  digitalWrite (D,LOW);
  digitalWrite (E,LOW);
  digitalWrite (Fl,LOW);
  digitalWrite (G,LOW);
  
}
void zero()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (Fl,HIGH);
  
}
void one()
{
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
}
void two()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (G,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (D,HIGH);
  
}
void three()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (G,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);

}
void four()
{
  digitalWrite (Fl,HIGH);
  digitalWrite (G,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);

}
void five()
{
  digitalWrite (A,HIGH);
  digitalWrite (Fl,HIGH);
  digitalWrite (G,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
}
void six ()
{
  digitalWrite (A,HIGH);
  digitalWrite (G,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (Fl,HIGH);
  
}
void seven()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
}
void eight()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (E,HIGH);
  digitalWrite (Fl,HIGH);
  digitalWrite (G,HIGH);
  
}
void nine()
{
  digitalWrite (A,HIGH);
  digitalWrite (B,HIGH);
  digitalWrite (C,HIGH);
  digitalWrite (D,HIGH);
  digitalWrite (Fl,HIGH);
  digitalWrite (G,HIGH);
  
}
void loop()
{
  
  digitalWrite(Red, HIGH);
  reset();
  five();
  delay(1000);

    reset();
  four();
  delay(1000);

    reset();
  three();
  delay(1000);

    reset();
  two();
  delay(1000);
    digitalWrite(Yellow, HIGH);
    reset();
  one();
  delay(1000);
  
  digitalWrite(Yellow, LOW);
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  
  reset();
  five();
  delay(1000);

  reset();
  four();
  delay(1000);

  reset();
  three();
  delay(500);
  digitalWrite(Green, LOW);
  delay(500);
  digitalWrite(Green, HIGH);

  reset();
  two();
  delay(500);
  digitalWrite(Green, LOW);
  delay(500);
  digitalWrite(Green, HIGH);

  reset();
  one();
  delay(500);
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, HIGH);
  delay(1000);
  digitalWrite(Yellow, LOW);
}
