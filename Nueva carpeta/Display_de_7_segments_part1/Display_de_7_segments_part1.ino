/********************************************************************************************************
 **
 **                    Repte 3 - Display de 7 segments      
 **                                Part 1
 **                            
 **   Nom: Núria Cordero Serra               Date: 02/02/2017
 *********************************************************************************************************/
//****************************Include**********************************

//****************************Variables********************************
const int A = 5;
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;
int pausa =1000; 
//****************************Setup************************************

void setup()
{ 
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);

 digitalWrite(A,HIGH);
 digitalWrite(B,HIGH);
 digitalWrite(C,HIGH);
 digitalWrite(D,HIGH);
 digitalWrite(E,HIGH);
 digitalWrite(F,HIGH);
 digitalWrite(G,HIGH);
 delay (pausa);
}
//***************************Loop**************************************

void loop ()
{ // número 1
  digitalWrite(A, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  delay(pausa);
  
  // número 2
  digitalWrite(A, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  
  delay(pausa);

  // num 3 
  digitalWrite(C, HIGH );
  digitalWrite(E, LOW );
  delay(pausa);

  // num 4 
  digitalWrite(A, LOW);
  digitalWrite(D, LOW );
  digitalWrite(F, HIGH);
  
  delay(pausa);

  //num 5 
 digitalWrite(A,HIGH);
 digitalWrite(B,LOW); 
 digitalWrite(D,HIGH);
 delay (pausa);
 
  // num 6 
  digitalWrite(A, LOW );
  digitalWrite(E, HIGH);
  
  delay (pausa);

  // num 7 
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  
  delay (pausa);

  // num 8 
  
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

  delay (pausa);

  // num 9 

  digitalWrite(D,LOW);
  digitalWrite(E,LOW);

  delay (pausa);

  // num 0 

  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(G,LOW);

  delay (pausa);
}
//***************************Funcions**********************************
