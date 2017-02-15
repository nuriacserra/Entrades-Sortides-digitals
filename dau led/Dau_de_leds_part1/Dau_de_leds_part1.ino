/********************************************************************************************************
 **
 **                           Repte 4. Dau de LEDs 
 **                               PArt 1 
 **                            
 **   Nom: Núria Cordero Serra               Date: 08/02/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
const int leds4 = 4;          
const int leds3 = 5;          
const int leds2 = 6;         
const int led1  = 7;          

int pausa = 2000;

//****************************Setup************************************
void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT);     
  
  digitalWrite(leds4, LOW);   
  digitalWrite(leds3, LOW);  
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, HIGH);   
  
  delay(pausa);
}
//***************************Loop**************************************
void loop()
{
  digitalWrite(led1, LOW);    
  digitalWrite(leds2, HIGH);  
  
  delay(pausa);
  
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, HIGH); 
  digitalWrite(leds3, HIGH);  
  
  delay(pausa);
  
  digitalWrite(led1, LOW);    
  digitalWrite(leds2, HIGH); 
  
  delay(pausa);
  
  digitalWrite(led1, HIGH);    
  
  delay(pausa);
  
  digitalWrite(led1, LOW);    
  digitalWrite(leds4, HIGH);
    
  delay(pausa);
  
  digitalWrite(leds4, LOW);   
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, HIGH);   
  
  delay(pausa);
}
//***************************Funcions**********************************
