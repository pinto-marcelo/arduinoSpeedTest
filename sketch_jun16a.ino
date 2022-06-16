int vermelho = 10;
int amarelo = 9;
int verde = 8;
int botao = 12;
int azul = 7;
int branco = 6;
int vermelho2 = 5;
int amarelo2 = 4;
int verde2 = 3;

int i=0;
int incr=0;



void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(branco, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(botao, INPUT);

  digitalWrite(verde2, HIGH);
  digitalWrite(amarelo2, LOW);  
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(branco, LOW);


}


void loop() 
{
  if (digitalRead(botao) == HIGH) //its an alternative if u dont want to press button, so i do use while
  while(incr<200)
  {
     while(incr < 6)
     {
      semaforo3();
      incr++;
     } 
       while(incr < 9)
     {
      semaforo2();
      incr++;
     }
       while(incr < 12)
     {
      semaforo();
      incr++;
     }
        while(incr < 13)
     {
      semaforo4();
      incr++;
     }    
  } 
 
}

void semaforo() {
    // 1st
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);

  delay(100);

  
  // ligamos o VERMELHO2;  
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  delay(100);

  // ligamos o BRANCO;  
  //digitalWrite(vermelho, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(branco, HIGH);
  delay(100);

  // ligamos o AZUL;
  digitalWrite(azul, HIGH);
  digitalWrite(branco, LOW);
  delay(100);

  //VERDE:
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(100);

  //AMARELO:
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(100);

  // ligamos o VERMELHO
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  delay(100);

  //ligar AMARELO (volta):
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
   delay(100);

  //ligar VERDE:
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH); delay(100);

  
  //ligar AZUL:
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH); delay(100);
    
    //ligar BRANCO:
  digitalWrite(azul, LOW);
  digitalWrite(branco, HIGH); delay(100);
  
      //ligar VERMELHO2:
        digitalWrite(branco, LOW);
  digitalWrite(vermelho2, HIGH); delay(100);


        //ligar AMARELO2:
  digitalWrite(amarelo2, HIGH); delay(100);
  digitalWrite(vermelho2, LOW);

          //ligar VERDE2:
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH); 
  delay(100);
}
void semaforo2() {
    // ligamos o AMARELO2; //ida
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);

  delay(50);

  
  // ligamos o VERMELHO2;  
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  delay(50);

  // ligamos o BRANCO;  
  //digitalWrite(vermelho, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(branco, HIGH);
  delay(50);

  // ligamos o AZUL;
  digitalWrite(azul, HIGH);
  digitalWrite(branco, LOW);
  delay(50);

  //VERDE:
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(50);

  //AMARELO:
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(50);

  // ligamos o VERMELHO
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  delay(50);

  //ligar AMARELO (Back):
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
   delay(50);

  //ligar VERDE:
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH); delay(50);

  
  //ligar AZUL:
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH); delay(50);
    
    //ligar BRANCO:
  digitalWrite(azul, LOW);
  digitalWrite(branco, HIGH); delay(50);
  
      //ligar VERMELHO2:
        digitalWrite(branco, LOW);
  digitalWrite(vermelho2, HIGH); delay(50);


        //ligar AMARELO2:
  digitalWrite(amarelo2, HIGH); delay(50);
  digitalWrite(vermelho2, LOW);

          //ligar VERDE2:
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH); 
  delay(50);
}
void semaforo3() {
    // ligamos o AMARELO2; //ida
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);

  delay(25);

  
  // ligamos o VERMELHO2;  
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  delay(25);

  // ligamos o BRANCO;  
  //digitalWrite(vermelho, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(branco, HIGH);
  delay(25);

  // ligamos o AZUL;
  digitalWrite(azul, HIGH);
  digitalWrite(branco, LOW);
  delay(25);

  //VERDE:
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(25);

  //AMARELO:
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(25);

  // ligamos o VERMELHO
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  delay(25);

  //ligar AMARELO (volta):
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
   delay(25);

  //ligar VERDE:
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH); delay(25);

  
  //ligar AZUL:
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH); delay(25);
    
    //ligar BRANCO:
  digitalWrite(azul, LOW);
  digitalWrite(branco, HIGH); delay(25);
  
      //ligar VERMELHO2:
        digitalWrite(branco, LOW);
  digitalWrite(vermelho2, HIGH); delay(25);


        //ligar AMARELO2:
  digitalWrite(amarelo2, HIGH); delay(25);
  digitalWrite(vermelho2, LOW);

          //ligar VERDE2:
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH); 
  delay(25);
}

void semaforo4() {
    // ligamos o AMARELO2; //ida
  digitalWrite(amarelo2, HIGH);
  digitalWrite(vermelho2, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(branco, LOW);
  digitalWrite(azul, LOW);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);

  delay(300);

  
  // ligamos o VERMELHO2;  
  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  delay(300);

  // ligamos o BRANCO;  
  //digitalWrite(vermelho, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(branco, HIGH);
  delay(300);

  // ligamos o AZUL;
  digitalWrite(azul, HIGH);
  digitalWrite(branco, LOW);
  delay(300);

  //VERDE:
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(300);

  //AMARELO:
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(300);

  // ligamos o VERMELHO
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  delay(300);

  //ligar AMARELO (volta):
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
   delay(300);

  //ligar VERDE:
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH); delay(300);

  
  //ligar AZUL:
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH); delay(300);
    
    //ligar BRANCO:
  digitalWrite(azul, LOW);
  digitalWrite(branco, HIGH); delay(300);
  
      //ligar VERMELHO2:
        digitalWrite(branco, LOW);
  digitalWrite(vermelho2, HIGH); delay(300);


        //ligar AMARELO2:
  digitalWrite(amarelo2, HIGH); delay(300);
  digitalWrite(vermelho2, LOW);

          //ligar VERDE2:
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH); 
  delay(300);
  digitalWrite(verde2, LOW);
}
