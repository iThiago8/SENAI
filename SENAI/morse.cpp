//

int LED = 2;
int delayCurto = 200;
int delayLongo = 600;
int delayEntre = 1000;

void setup()
{
  pinMode(LED, OUTPUT);
}

void ponto(){
    digitalWrite(LED, HIGH);
    delay(delayCurto);
     digitalWrite(LED, LOW);
    delay(delayCurto); 
}

void espaco(){
    digitalWrite(LED, HIGH);
    delay(delayLongo);
    digitalWrite(LED, LOW);
    delay(delayCurto);
}

void fim(){
    digitalWrite(LED, LOW);
    delay(delayEntre);
}

void letraA(){
    ponto();
    espaco();
    fim();
}

void letraB(){
   espaco();
   ponto();
   ponto();
   ponto();
   fim();
}

void letraD(){
    espaco();
    ponto();
    ponto();
    fim();
}

void letraE(){
    ponto();
    fim();
}

void letraF(){
    ponto();
    ponto();
    espaco();
    ponto();
    fim();
}

void letraG(){
    espaco();
    espaco();
    ponto();
    fim();
}

void letraH(){
    ponto();
    ponto();
    ponto();
    ponto();
    fim();
}

void letraI(){
    ponto();
    ponto();
    fim();
}

void letraJ(){
    ponto();
    espaco();
    espaco();
    espaco();
    fim();
}

void letraK(){
    espaco();
    ponto();
    espaco();
    fim();
}

void letraL(){
    ponto();
    espaco();
    ponto();
    ponto();
    fim();
}

void letraM(){
    espaco();
    espaco();
    fim();
}

void letraN(){
    espaco();
    ponto();
    fim();
}

void letraO(){
    espaco();
    espaco();
    espaco();
    fim();
 }

void letraP(){
    ponto();
    espaco();
    espaco();
    ponto();
    fim();
}

void letraQ(){
    espaco();
    espaco();
    ponto();
    espaco();
    fim();
}

void letraR(){
    ponto();
    espaco();
    ponto();
    fim();
}

void letraS(){
    ponto();
    ponto();
    ponto();
    fim();
 }

void letraT(){
    espaco();
    fim();
}

void letraU(){
    ponto();
    ponto();
    espaco();
    fim();
}

void letraV(){
    ponto();
    ponto();
    ponto();
    espaco();
    fim();
}

void letraW(){
    ponto();
    espaco();
    espaco();
    fim();
}

void letraX(){
    espaco();
    ponto();
    ponto();
    espaco();
    fim();
}

void letraY(){
    espaco();
    ponto();
    espaco();
    espaco();
    fim();
}

void letraZ(){
    espaco();
    espaco();
    ponto();
    ponto();
    fim();
}

 void numero0(){

    espaco();
    espaco();
    espaco();
    espaco();
    espaco();
    fim();
 }