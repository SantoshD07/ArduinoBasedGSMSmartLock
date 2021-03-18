#include<SoftwareSerial.h>
SoftwareSerial gsm(8,9);

String incomingch;
int flag=0; 
void setup() 
{
  Serial.begin(9600);
  gsm.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
}

void check_incoming()
{
  if(gsm.available())
  {
    incomingch = gsm.read();
  }
}

void loop() 
{
 check_incoming();

  if(incomingch =="RING") 
  {
    delay(5000);
    if(authorised no.) //checking for authorised no.
      {
      gsm.write("ATA\r\n"); // call recieved successfully
      delay(500);
      //play recording:
      /* welcome to arduino home security please enter the password*/
      digitalWrite(8,HIGH);
      delay(300);
      digitalWrite(8,LOW);
      check_code() // func for checking the code using the num pad (freqency) flag is ref variable
       if(flag==1);
         { /* open servo motor, lock */
           digitalWrite(11,HIGH);
           //Should specify the angle
           delay(500);
         }
       } 
    else //if not authorised 
     {
      gsm.write("ATH");
     }    
   
        
  }
 

}
