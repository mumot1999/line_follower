const int sensorA = A0;
const int sensorB = A1; 

const int motorA = 10;
const int motorB = 9; 

int sensorValueA = 0;       
int sensorValueB = 0;        

void setup() {
  Serial.begin(9600);   
}

void loop() {
  sensorValueA = analogRead(sensorA);  
  sensorValueB = analogRead(sensorB);            
  
  analogWrite(motorA, sensorValueA < 250 ? 120 : 255);           
  analogWrite(motorB, sensorValueB < 250 ? 120 : 255);           

  delay(10);
}
