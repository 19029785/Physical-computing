int TrigPin = 8; 
int EchoPin = 9; 
int LedPin = 12;
int val;  
void setup() 
{ 
Serial.begin(9600); 
pinMode(TrigPin, OUTPUT); 
pinMode(EchoPin, INPUT); 
pinMode(LedPin,OUTPUT);
} 
void loop() 
{
digitalWrite(TrigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(TrigPin, HIGH); 
delayMicroseconds(10);
int cm = pulseIn(EchoPin, HIGH) / 20.0; 
cm = (int(cm * 100.0)) / 100.0; 
Serial.println(cm); 
Serial.println("cm"); 
delay(50);
if (58>=cm)
{
digitalWrite(LedPin, HIGH);
    delay(20);    
}else{
digitalWrite(LedPin,LOW);
}
}
