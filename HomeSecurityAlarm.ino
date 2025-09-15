int Read=5;
int PIR= 0;
void setup()
{
  Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);
  pinMode(5,INPUT);
 Serial.println("Sensor is warming up");
 delay(30000);
 Serial.println("Sensor is ACTIVE");

}

void loop()
{
  int Val=digitalRead(Read);
  if(Val==HIGH){
 Serial.println("Motion Detected");     
digitalWrite(3,HIGH);   
digitalWrite(2,HIGH);
delay(15000);
digitalWrite(3,LOW);
digitalWrite(2,LOW);    
    if(PIR=LOW){
 // Serial.println("Motion Detected");
  PIR=HIGH;
    } 
  }
  else{
    if(PIR=HIGH){
     Serial.println("Motion Stopped");
  PIR=LOW;
      
    }
 delay(1000);  
  
  }
  
  
}
