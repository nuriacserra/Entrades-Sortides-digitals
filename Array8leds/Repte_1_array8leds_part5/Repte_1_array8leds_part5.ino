/***********************************************************************************
 **
 **                    Repte 1. Array de 8 Led's     
 **                                Part 5
 **                            
 **   Nom: Núria Cordero Serra               Date: 26/01/2017
 **********************************************************************************/
//****************************Include**********************************

//****************************Variables********************************

const int ledPin[] = {3,4,5,6,9, 10, 11, 12};   
const int buttonPin = 2 ;                      
boolean buttonEstat = LOW ;  

 int ledNum = 8 ; 
 int num = 9;
//****************************Setup************************************

void setup()
{
  for(int n = 0; n < ledNum; n++) 
  {
    pinMode(ledPin[n], OUTPUT);
  }
  pinMode(buttonPin,INPUT);
  for (int m= 0; m <ledNum; m ++)
  { 
    digitalWrite(ledPin [m],0);
  }
}

//***************************Loop**************************************

void loop()
{
  buttonEstat= digitalRead (buttonPin); 
  if (buttonEstat == HIGH )
  {
    num = num +1 ; 
    if (num == 16 ) num = 0;
    for (int m =0;m<ledNum ; m ++)
    {
      digitalWrite (ledPin [m],bitRead (num,m));
    }
    delay (500);
  }
}
//***************************Funcions**********************************
