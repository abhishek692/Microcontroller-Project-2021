// defining the pins
const int trigPin1 = 3;
const int echoPin1 = 6;


long duration1;
int distancefront;

void setup() {
  pinMode(trigPin1, OUTPUT);
 
  pinMode(echoPin1, INPUT);
  

  Serial.begin(9600); 
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop() {
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distancefront = duration1 * 0.034 / 2;
  Serial.print("Distance1: ");
  Serial.println(distancefront);

  if (distancefront <= 20)   // right turn
  {
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(12, LOW);

  }
  else{    
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(12, HIGH);
     
  }
 
}
