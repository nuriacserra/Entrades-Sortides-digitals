/**********************************************************************
 **
 **                         Repte 2 : Cruïlla de semàfors
 **                                      Part 1 
 **                            
 **   Nom: Núria Cordero Serra                         Date: 27/01/2017
 **********************************************************************/
//****************************Include**********************************

//****************************Variables********************************
const int semaforA1=12;  //   A vermell 
const int semaforA2=11;  //   A tron
const int semaforA3=10;  //   A verd 
const int semaforB1=9;   //   B vermell 
const int semaforB2=8;   //   B tron
const int semaforB3=7;   //   B verd 
int pausa = 1000 ;       //  un segon

//*******************Setup************************************
void setup()
 {
  pinMode (semaforA1,OUTPUT);  // A
  pinMode (semaforA2,OUTPUT);  // A
  pinMode (semaforA3,OUTPUT);  // A  
  pinMode (semaforB1,OUTPUT);  // B
  pinMode (semaforB2,OUTPUT);  // B
  pinMode (semaforB3,OUTPUT);  // B

  digitalWrite(semaforA1,HIGH);
  digitalWrite(semaforA2,LOW);
  digitalWrite(semaforA3,LOW);
  digitalWrite(semaforB1,HIGH);
  digitalWrite(semaforB2,LOW);
  digitalWrite(semaforB3,LOW);
  delay(pausa);
  
}
//*********************Loop**************************************
void loop()
{
  digitalWrite(semaforB1,LOW); //apaga led vermell B
  digitalWrite(semaforB3,HIGH);//encen verd        B

  delay (4*pausa);

  digitalWrite(semaforB2,LOW);// apagar taronja    B
  digitalWrite(semaforB1,HIGH); // encen vermell   B

  delay(pausa);

  digitalWrite(semaforA1,LOW);  // B
  digitalWrite(semaforA3,HIGH); // B

  delay (pausa);

  digitalWrite(semaforA1,LOW);  // A
  digitalWrite(semaforA3,HIGH); // A
  delay(4*pausa);

  digitalWrite(semaforA2,LOW);  // A
  digitalWrite(semaforA1,HIGH); // A

  delay(pausa);

  digitalWrite(semaforA2,LOW);  // A
  digitalWrite(semaforA1,HIGH); // A

  delay(pausa);
}

//***************************Funcions**********************************
