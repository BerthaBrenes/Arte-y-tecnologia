int pinzumbador = 13;    // pin del zumbador
int  la = 440;//frencuencia de la
int la# = 466.2; //frecuencia de la#
int sol = 392;// frecuencia de sol
int re# = 293.7; // frecuencia de re#
int mi = 329.6;// frecuencia de mi
int fa# = 370;// frecuencia de fa#
int Do = 261.6; //frecuencia de Do'
int si = 493.2;//frecuencia de si
int re = 587;// frecuencia de re

void setup()
{
}

void loop()
{
    tone(pinzumbador,re#); // inicia la secuencia de musica de la pantera rosa
    delay(500);
    tone(pinzumbador,mi);  
    delay(500);
    tone(pinzumbador,fa#); 
    delay(500);
    tone(pinzumbador,sol); 
    delay(1000);
    tone(pinzumbador,re#); 
    delay(500);
    tone(pinzumbador,mi);
    delay(500);
    tone(pinzumbador,fa#); 
    delay(500);
    tone(pinzumbador,sol); 
    delay(1000);
    tone(pinzumbador,Do);
    delay(500);
    tone(pinzumbador,si);
    delay(500);
    tone(pinzumbador,mi); 
    delay(500);
    tone(pinzumbador,sol);
    delay(500); 
    tone(pinzumbador,si); 
    delay(500);
    tone(pinzumbador,la#);
    delay(1000);
    tone(pinzumbador,la); 
    delay(500);
    tone(pinzumbador,sol); 
    delay(500);
    tone(pinzumbador,mi); 
    delay(500);
    tone(pinzumbador,re); 
    delay(500);
    tone(pinzumbador,mi);       
    delay(1000);            
    noTone(pinzumbador);               // lo detiene a los dos segundos
    delay(1000);
}
