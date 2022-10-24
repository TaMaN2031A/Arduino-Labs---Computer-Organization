#define in 7
#define red 2
#define green 4
int i=0;

void setup() {
  // put your setup code here, to run once:

    
    
    Serial.begin(9600);
    pinMode(in, INPUT_PULLUP);
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
    digitalWrite(red,HIGH);
    
    

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(debounce(in)==LOW){
    
  if(i==0){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    i++;
     delay(100);
  }
 else if(i==1){
  digitalWrite(green,LOW);
  digitalWrite(red,HIGH);
  i--;
 delay(100);
  }
 
 delay(100);
  
   

  }

}

bool debounce(int p){
bool state,prev;

prev=digitalRead(p);

for(int i=0;i<10;i++){
      delay(1);
      state=digitalRead(p);
      if(state!=prev){
        i=0;
        prev=state;
      }

}
return state;

}
