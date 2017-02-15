/********************************************************************************************************
 **
 **                           Display de 7 segments 
 **                                  Part 3 
 **                            
 **   Nom: Núria Cordero Serra               Date: 08/02/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
const char ledOn = HIGH;
const char ledOff = LOW;

int seg_a = 5;
int seg_b = 6;
int seg_c = 7;
int seg_d = 8;
int seg_e = 9;
int seg_f = 10;
int seg_g = 11;

const int segmentPin[] = {seg_a,seg_b,seg_c,seg_d,seg_e,seg_f,seg_g};

int segmentNum = 7;   
int pausa = 500;       
const byte codis[] = {
 //ABCDEFG_
  B11111100,  // Representa el 0
  B01100000,  // Representa el 1
  B11011010,  // Representa el 2
  B11110010,  // Representa el 3
  B01100110,  // Representa el 4
  B10110110,  // Representa el 5
  B00111110,  // Representa el 6
  B11100000,  // Representa el 7
  B11111110,  // Representa el 8
  B11100110,  // Representa el 9
  B11101110,  // Representa la a (10)
  B00111110,  // Representa la b (11)
  B10011100,  // Representa la c (12)
  B01111010,  // Representa la d (13)
  B10011110,  // Representa la e (14)
  B10001110,  // Representa la f (15)
  B11110110,  // Representa la g (16)
  B01101110,  // Representa la h (17)
  B00001100,  // Representa la i (18)
  B01111000,  // Representa la j (19)
  B01101110,  // Representa la k (20)
  B00011100,  // Representa la l (21)
  B10101000,  // Representa la m (22)
  B00101010,  // Representa la n (23)
  B11111100,  // Representa la o (24)
  B11001110,  // Representa la p (25)
  B11100110,  // Representa la q (26)
  B00001010,  // Representa la r (27)
  B10110110,  // Representa la s (28)
  B00111100,  // Representa la t (29)
  B01111100,  // Representa la u (30)
  B00111000,  // Representa la v (31)
  B01010100,  // Representa la w (32)
  B01101110,  // Representa la x (33)
  B01110110,  // Representa la y (34)
  B11011010,  // Representa la z (35)
  B00000000,  // Representa el   (36)
};
//****************************Setup************************************
void setup()
{
  for(int i = 0; i < segmentNum; i++)
  {
    pinMode(segmentPin[i], OUTPUT);
    digitalWrite(segmentPin[i], ledOff);
  } 
}
//***************************Loop**************************************
void loop()
{
  mostra(23);  // N
  mostra(30);  // u
  mostra(27);  // r
  mostra(18);  // i
  mostra(10);  // a
  
  mostra(12);  // c
  mostra(28);  // s
 
  delay(3000);
  shutDown();
  delay(2000);
}
//***************************Funcions**********************************
void mostra(int element)
{
  boolean estatSegment;
  for(int segment = 1; segment < 8; segment++)
  {
    estatSegment = bitRead(codis[element], segment);
    if (ledOn == LOW) estatSegment = ! estatSegment;
    digitalWrite(segmentPin[(7-segment)], estatSegment);
  }
  delay(pausa);
}

void shutDown()
{
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(segmentPin[i], ledOff); 
  }

}
