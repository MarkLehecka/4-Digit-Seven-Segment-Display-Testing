
const int pinA = 27;
const int pinB = 28;
const int pinC  = 29;
const int pinD = 30;
const int pinE = 31;
const int pinF = 32;
const int pinG = 33;
const int pinDP = 34;
const int pinColon = 36;


const int  D1 = 23;
const int D2 = 24;
const int D3 = 25;
const int D4 = 26;
const int Colon = 35;

const int decimalArray[5] = {D1, D2, D3, D4, Colon};

const int numTestArray[15] = {0000, 1234, 9999, 0, 00, 000, 0000, 1, 11, 111, 1111, 4321, 432, 43,4 };



void setup() {                
  pinMode(pinA, OUTPUT);     
  pinMode(pinB,  OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG,  OUTPUT); 
  pinMode(pinDP, OUTPUT);  
  pinMode(pinColon,OUTPUT);


  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3,  OUTPUT);  
  pinMode(D4, OUTPUT);  
  pinMode(Colon, OUTPUT);
    
}

void loop() {

  int valueArray[4] = {0,0,0,0};
  int inputNum = 0;
 
  for(int i = 0; i <15; i++){
    
    inputNum = numTestArray[i];
    
    for (int j = 0; j < 4; j++) {
      valueArray[j] = 0;
    }

    valueArray[0] = inputNum/ 1000;
    inputNum = inputNum % 1000;

    valueArray[1] = inputNum/ 100;
    inputNum = inputNum % 100;

    valueArray[2] = inputNum/ 10;
    valueArray[3] = inputNum % 10;  

      //timer for-loop for maintaining a stable image of the numbers.
      for (int t = 0; t < 100; t++) {

        for (int k = 0; k < 4; k++) {

          digitalWrite(D1, HIGH);
          digitalWrite(D2, HIGH);
          digitalWrite(D3, HIGH);
          digitalWrite(D4, HIGH);

          numDisplay(valueArray[k]);
          digitalWrite(decimalArray[k], LOW);

          delay(1);
        }
      }
  }
  
}



void numDisplay(int Num){

  switch(Num){
  
    case 0:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, LOW);     
      break;
    case 1:
      digitalWrite(pinA, LOW); 
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW); 
      digitalWrite(pinG, LOW); 
      break;
    case 2:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, LOW);   
     digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH);   
      break; 
    case 3:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, HIGH); 
      break; 
    case 4:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);  
      break; 
    case 5:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH); 
      break; 
    case 6:
      digitalWrite(pinA, LOW);   
      digitalWrite(pinB, LOW);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);   
      break;
    case 7:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, LOW);   
      digitalWrite(pinG, LOW);    
      break;
    case 8:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, HIGH);   
      digitalWrite(pinE, HIGH);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);     
      break;
    case 9:
      digitalWrite(pinA, HIGH);   
      digitalWrite(pinB, HIGH);   
      digitalWrite(pinC, HIGH);   
      digitalWrite(pinD, LOW);   
      digitalWrite(pinE, LOW);   
      digitalWrite(pinF, HIGH);   
      digitalWrite(pinG, HIGH);    
      break;

  }
}