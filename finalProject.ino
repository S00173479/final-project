int threshold = 530;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 checkNoiseLevel();

  
  Serial.println(threshold);
  delay(1000);        // delay in between reads for stability
}


void checkNoiseLevel ()
{
  int sensorValue = analogRead(A3); 
  Serial.println(sensorValue);
  if (sensorValue > threshold){ // buzzer code goes here?
      digitalWrite(2, HIGH);
  }
  else{
    digitalWrite (2, LOW);
  } 
}
