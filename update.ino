int piros= 13;

int sarga= 12;

int zold= 11;

int piros1= 10;

int sarga1= 9;

int zold1= 8;

int zold2= 6;
  
int piros2 = 7;

 

void setup() {

  pinMode(piros, OUTPUT);

  pinMode(sarga, OUTPUT);

  pinMode(zold, OUTPUT);
  
  pinMode(piros1, OUTPUT);

  pinMode(sarga1, OUTPUT);

  pinMode(zold1, OUTPUT);
  
  pinMode(zold2, OUTPUT);
  
  pinMode(piros2, OUTPUT);

}

 

void loop() {
  digitalWrite(piros2, HIGH); //gyj-lámpa
  
  //delay(1500);

  digitalWrite(piros1, HIGH);
  
  digitalWrite(piros, HIGH);
  
  delay(6000); 

  
  digitalWrite(piros2, LOW);
  
  digitalWrite(zold2, HIGH);
  
  delay(5000);
    
  digitalWrite(zold2, LOW);
  
  digitalWrite(sarga, HIGH);
  
  digitalWrite(piros2, HIGH);
  
  digitalWrite(sarga1, HIGH);

  delay(2000);
 

  digitalWrite(sarga1, LOW);
  
  digitalWrite(sarga, LOW);
  
  digitalWrite(piros1, LOW);
  
  digitalWrite(piros, LOW);

  digitalWrite(zold1, HIGH);
  
   digitalWrite(zold, HIGH);

  delay(3500);

 

  digitalWrite(zold1,LOW);
  
  digitalWrite(zold,LOW);
  
  
  digitalWrite(sarga1, HIGH);
  
  digitalWrite(sarga, HIGH);

  delay(1000);
  
  digitalWrite(sarga1, LOW);
  
  digitalWrite(sarga, LOW);
}
