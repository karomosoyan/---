#define in1 8 
#define in2 9 
#define in3 10 
#define in4 11 
int dl = 5 
#include "IRremote.h" 
#include <Servo.h> 

Servo myservo;
IRrecv irrecv (2);  
decode_results results; 
Servo myservo1; 

void setup() { 
  
pinMode(in1, OUTPUT); 
pinMode(in2, OUTPUT); 
pinMode(in3, OUTPUT); 
pinMode(in4, OUTPUT);   
myservo.attach(6); 
myservo1.attach(7); 
Serial.begin (9600); 
irrecv.enableIRIn();  
myservo.write(80);
myservo1.write(0); 

  

} 

void loop() { 
if ( irrecv.decode ( &results )) {  
Serial.println( results.value );  
irrecv.resume(); 

} 

if (results.value==16736925){ 
myservo.write(80); 

} 

  

if (results.value==16754775){ 
myservo.write(60); 

} 


if (results.value==16712445){ 
myservo1.write(150); 
delay(500); 
myservo1.write(0); 
} 


if (results.value==16761405){ 
digitalWrite(in1, HIGH);  
digitalWrite(in2, LOW);  
digitalWrite(in3, LOW);  
digitalWrite(in4, HIGH); 
delay(dl); 
  

digitalWrite(in1, HIGH);  
digitalWrite(in2, HIGH);  
digitalWrite(in3, LOW);  
digitalWrite(in4, LOW); 
delay(dl); 

 
digitalWrite(in1, LOW);  
digitalWrite(in2, HIGH);  
digitalWrite(in3, HIGH);  
digitalWrite(in4, LOW); 
delay(dl); 

 
digitalWrite(in1, LOW);  
digitalWrite(in2, LOW);  
digitalWrite(in3, HIGH);  
digitalWrite(in4, HIGH); 
delay(dl); 
    
} 

 
if (results.value==16720605){ 
digitalWrite(in1, LOW);  
digitalWrite(in2, LOW);  
digitalWrite(in3, HIGH);  
digitalWrite(in4, HIGH); 
delay(dl); 
digitalWrite(in1, LOW);  
digitalWrite(in2, HIGH);  
digitalWrite(in3, HIGH);  
digitalWrite(in4, LOW); 
delay(dl); 

digitalWrite(in1, HIGH);  
digitalWrite(in2, HIGH);  
digitalWrite(in3, LOW);  
digitalWrite(in4, LOW); 
delay(dl); 
 
digitalWrite(in1, HIGH);  
digitalWrite(in2, LOW);  
digitalWrite(in3, LOW);  
digitalWrite(in4, HIGH); 
delay(dl); 
} 

}   

 

 

 
