#include <LiquidCrystal.h>
#define Output_buzzer 6
#define Input_laser_detection 7
LiquidCrystal lcd(0,1,2,3,4,5);
void laser_on(){
      digitalWrite(Output_buzzer,LOW);
      lcd.clear();
      lcd.print("laser Detection");
      delay(1000);
}
void laser_off(){
      digitalWrite(Output_buzzer,HIGH);
      lcd.clear();
      lcd.print("No laser Detection");
      delay(1000);
}

void setup() {
  // put your setup code here, to run once:

pinMode(Input_laser_detection,INPUT);
pinMode(Output_buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Input_laser_detection)==HIGH){
      laser_on();
}
else {
  laser_off();
}
}
