//obstacle detection
#include<LiquidCrystal.h>
LiquidCrystal lcd(10,9,8,7,6,5);//(RS,E,D4,D5,D6,D7)
int const trigPin = 12;
int const echoPin = 11;
int const buzzPin = 2;
void setup()
{
lcd.begin(16,2);
lcd.clear();
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzPin, OUTPUT); 
}
void loop()
{
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = duration * 0.034 / 2; 
if (distance <= 50 && distance >= 0) 
{ 
lcd.setCursor(0,0);
lcd.print("DANGER");
digitalWrite(buzzPin,HIGH);
} 
else 
{
lcd.setCursor(0,0);
lcd.print("SAFE");  
digitalWrite(buzzPin,LOW);
}
delay(60);
}
//obstacle detection
//nilesh,rishabh,shivam
