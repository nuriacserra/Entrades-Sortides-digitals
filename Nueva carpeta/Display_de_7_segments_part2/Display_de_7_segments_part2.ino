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
const int pushbutton = 2;
boolean   pushEstat = LOW; 

int num = 0;
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
  pinMode(pushbutton,INPUT);
  
 digitalWrite(A,LOW);
 digitalWrite(B,LOW);
 digitalWrite(C,LOW);
 digitalWrite(D,LOW);
 digitalWrite(E,LOW);
 digitalWrite(F,LOW);
 digitalWrite(G,LOW);
 
}
//***************************Loop**************************************

void loop ()
{ delay(500);
  pushEstat = digitalRead(pushbutton);

  if (pushEstat == HIGH )
  { num = num + 1 ;
      if  (num == 10) num = 0 ;
  }
  switch (num)
  {
    case 0 
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH); 
  digitalWrite(C,HIGH); 
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  break;
  
  case 1 
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  break; 
  case 2
  digitalWrite(A,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(G,HIGH);
  break;
  case 3 
  digitalWrite(C,HIGH);
  digitalWrite(E,LOW);
  break;
  case 4 
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(F,HIGH);
  break ; 
  case 5 
 digitalWrite(A,HIGH);
 digitalWrite(B,LOW); 
 digitalWrite(D,HIGH);
 break ; 
 case 6
  digitalWrite(A,LOW);
  digitalWrite(E,HIGH);
  break;
  case 7 
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  break;
  case 8 
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  break;
  case 9 
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  break;
  }
}
//***************************Funcions**********************************
