/*********************************************************************
 **                           Repte 4. Dau de LEDs 
 **                               PArt 2 
 **                            
 **   Nom: Núria Cordero Serra               Date: 15/02/2017
 **********************************************************************/
//****************************Include**********************************


//****************************Variables********************************
const int leds4 = 5;          
const int leds3 = 6;          
const int leds2 = 7;         
const int led1  = 8;          
const int boto = 9;
boolean botoEstat = LOW;

int num = 1;

//****************************Setup************************************
void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(boto,INPUT);
  
  digitalWrite(leds4, LOW);   
  digitalWrite(leds3, LOW);  
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, LOW);   
  
}
//***************************Loop**************************************
void loop()
{
  botoEstat = digitalRead(boto);
  if (botoEstat == HIGH)
  { 
    num = random(1,7);
    digitalWrite(leds2,LOW);
    digitalWrite(leds3,LOW);
    digitalWrite(leds4,LOW);
    digitalWrite(led1,LOW);
  }
  switch(num)
  {
    case 1:
      digitalWrite(led1, HIGH);    
    case 2:      
      digitalWrite(leds2, HIGH);   
      break;
    case 3:  
      digitalWrite(led1, HIGH);    
      digitalWrite(leds3, HIGH);  
      break;8
    case 4:   
      digitalWrite(leds2, HIGH);   
      digitalWrite(leds3, HIGH); 
      break;
    case 5:
      digitalWrite(leds2, HIGH);   
      digitalWrite(leds3, HIGH);
      digitalWrite(led1, HIGH);    
      break;
    case 6:      
      digitalWrite(leds2, HIGH);
      digitalWrite(leds3, HIGH);
      digitalWrite(leds4, HIGH);
      break;  
 }
}
//***************************Funcions**********************************
