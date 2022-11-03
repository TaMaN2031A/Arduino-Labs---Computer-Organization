int x, y;
int idx;
char strValue[5];

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  
}

void loop() {
  //Q1();
  Q2();
}
void Q2(){
  for (float i = 0.0; i <= 2 * PI; i += 0.1) {
      Serial.println(sin(i));
   }
}



void Q1(){
  Serial.println("please enter first number:");
  x = getNumber();
  Serial.println(x);
  Serial.println("please enter second number:");
  y = getNumber();
  Serial.println(y);
  Serial.println("The result is:");
  Serial.println(x+y);
  for(int i = 0; i < 50; i++)
    Serial.print("_");
  Serial.println();
}
int getNumber(){
  idx = 0;
  while(idx < 5){
    if(Serial.available())
    {
      char ch = Serial.read();
      strValue[idx++] = ch;
      if(idx == 5)
        return atoi(strValue);
    }
  }
}
