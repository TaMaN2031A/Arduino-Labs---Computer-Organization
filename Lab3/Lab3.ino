
int analog_in = A5;
int buzzer_out = 5;
int sensorVal = 0;
void setup()
{
  Serial.begin(9600);

  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);
  pinMode(buzzer_out, OUTPUT);
}

void loop()
{
  sensorVal = analogRead(analog_in);
  Serial.println(sensorVal);
  delay(100);
  if(sensorVal < 512)
    {
        digitalWrite(13, 0);
        noTone(buzzer_out); 
    }
    else if(sensorVal > 614)
    {
        digitalWrite(13, 1);
        tone(buzzer_out,261);    
    }
    else
    {
        digitalWrite(13, 1);
        noTone(buzzer_out); 
    }
        
}
