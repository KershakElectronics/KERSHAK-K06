/*Con el sensor de presencia xxxx 
y un buzzer pasivo crearemos una alarma
este sensor es digital, es decir, si detecta movimiento
cambia a HIGH, si no, se mantiene en LOW
*/

#define sensor PB7 
#define buzzer PB8 
#define foco PB9 
void setup() {
  pinMode(sensor,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(foco,OUTPUT);

  digitalWrite(sensor,LOW);
  digitalWrite(buzzer,LOW);
  digitalWrite(foco,LOW);
}

void loop() 
{

  if(digitalRead(sensor)==HIGH)
  {
    for(int a=0;a<=5;a++)
      {
           digitalWrite(foco,HIGH);
           for (int i=2000;i<=4000; i++)
             {
               tone(buzzer, i,250);
             }
        
          digitalWrite(foco,LOW);
            
          for (int i=4000;i>=2000; i--)
            {
              tone(buzzer, i, 250);  
            }
      }
  }
   
    

}
