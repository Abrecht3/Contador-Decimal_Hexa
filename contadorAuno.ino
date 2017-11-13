/*
 * Practica 1.2 Codigo Reducido
 */
void hex();
void BCD();
#define tiempo 200
int leds[]={B0000,B0001,B0010,B0011,B0100,B0101,B0110,B0111,B1000,B1001,B1010,B1011,B1100,B1101,B1110,B1111};
byte hexad[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x18,0x08,0x03,0x46,0x21,0x06,0x0e}; //Display anodo

// the setup function runs once when you press reset or power the board
void setup() {
  DDRA=B11111111;
  DDRC=B11111111;
  DDRB=B11110000;
  DDRL=B11110000;

  pinMode(5,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(5)==HIGH)
  hex();
  else
  BCD();
}

/************Funciones**************/
void BCD()
{
  int x,y;
  for(x=0;x<10;x++)
  {PORTA=hexad[x];
   PORTB=leds[x]; 
   for(y=0;y<10;y++)
   {
    PORTC=hexad[y];
    PORTL=leds[y];
    delay(500);
   }
   delay(500);
  }
}

void hex()
{
  int x,y;
  for(x=0;x<16;x++)
  {PORTA=hexad[x];
   PORTB=leds[x]; 
   for(y=0;y<16;y++)
   {
    PORTC=hexad[y];
    PORTL=leds[y];
    delay(500);
   }
   delay(500);
  }
}
