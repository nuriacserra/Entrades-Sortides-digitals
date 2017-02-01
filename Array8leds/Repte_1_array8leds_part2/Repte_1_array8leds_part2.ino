/***********************************************************************************
 **
 **                    Repte 1. Array de 8 Led's     
 **                                Part 2
 **                            
 **   Nom: Núria Cordero Serra               Date: 26/01/2017
 **********************************************************************************/
//****************************Include**********************************

//****************************Variables********************************

const int Led0 = 3;
const int Led1 = 4;
const int Led2 = 5;
const int Led3 = 6;
const int Led4 = 9;
const int Led5 = 10;
const int Led6 = 11;
const int Led7 = 12;

//****************************Setup************************************

void setup()
{
  pinMode(Led0,OUTPUT);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led4,OUTPUT);
  pinMode(Led5,OUTPUT);
  pinMode(Led6,OUTPUT);
  pinMode(Led7,OUTPUT);

}
//***************************Loop**************************************

void loop ()
{
  digitalWrite(Led0, LOW);
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, HIGH);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, HIGH);
  digitalWrite(Led6, LOW);
  digitalWrite(Led7, HIGH);


  delay(500);


  digitalWrite(Led0, HIGH );
  digitalWrite(Led1, LOW );
  digitalWrite(Led2, HIGH );
  digitalWrite(Led3, LOW );
  digitalWrite(Led4, HIGH );
  digitalWrite(Led5, LOW );
  digitalWrite(Led6, HIGH );
  digitalWrite(Led7, LOW );

   delay (500);
  
}
//***************************Funcions**********************************
