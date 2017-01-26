/***********************************************************************************
 **
 **                    Repte 1. Array de 8 Led's     
 **                                Part 4
 **                            
 **   Nom: Núria Cordero Serra               Date: 26/01/2017
 **********************************************************************************/
//****************************Include**********************************

//****************************Variables********************************

const int ledPin[] = {5, 6, 7, 8};   
int ledNum = 9;                      
int pausa = 500;   
//****************************Setup************************************

void setup()
{
  for(int n = 0; i < ledNum; n++) 
  {
    pinMode(ledPin[n], OUTPUT);
  }
}

//***************************Loop**************************************

void loop()
{
  for(int n = 0; n < 16; n++)     
  {
    for(int j = 0; j < ledNum ; j++)   
    { 
      digitalWrite(ledPin[j], bitRead(i, j));
    }
    delay(pausa);                 
  }
}

//***************************Funcions**********************************
