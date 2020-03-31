/**
 Prototipado de un control de rutas basado en checkpoints
 D
*/
#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>
int value = 0;
int value2 = 0;
int car = 0;
int car2 = 0;
const int sensorPin = 9;
const int sensorPin2 = 10;
boolean cat = 0;
float a = 0;
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
	
int string[] = {"valor0", "valor1", "valor2"}
void setup()
{
  lcd.begin(16, 2);
  pinMode(sensorPin , INPUT);
  pinMode(sensorPin2 , INPUT);
}

void loop()
{
  
  int i;
  a++;
   lcd.setCursor ( 7, 0);
   lcd.print(a/10); 
   if (a/10>2)
   {
      lcd.setCursor ( 7, 1);
      lcd.print("Atrasado"); 
    }
  value = digitalRead(sensorPin);
  value2= digitalRead(sensorPin2);
  if(value == HIGH||value2 == HIGH) {
    cat = 1;
     a = 0;
     }
  else
  {
    cat = 0;
    }
   if (cat == 1)
   {
      lcd.setCursor ( 0, 1 );
      car++;
      lcd.print(car);
    }
    else 
    {  lcd.setCursor ( 0, 1 );
        lcd.print(car);
      }
delay(100);
}


 