#include <Servo.h>
#define AD5 A5
int pos=30;
Servo myservo;

int Intensity = 0;

void setup()
{
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
Intensity = analogRead(AD5);
  Serial.print("Intensity = ");
  Serial.println(Intensity);
  delay(500);

if (Intensity > 1000){
for (pos = 30; pos <= 90; pos ++) { 
    myservo.write(pos);              
    delay(5);                      
  }
  for (pos = 90; pos >= 30; pos --) { 
    myservo.write(pos);              
    delay(5); 
  
                     
  } 

if (Intensity < 1000){
myservo.write(30);
delay(100);}
   }

}
