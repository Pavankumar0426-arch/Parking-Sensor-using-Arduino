int trigPin = 7; 
int echoPin = 4;
int buzzerPin = 9; 
int ledPin = 6;
int time;		
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  int time = pulseIn(echoPin, HIGH); 
  int distance = (time*0.034)/2; 

  if (distance <= 30) {    
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(200);
  }
  else {     
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(200);  
  }
}
