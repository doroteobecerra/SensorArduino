  int TRIG = 7; //naraja
  int ECO = 6; //cafe
  int DURACION;
  int DISTANCIA;

 
void setup() {
  // put your setup code here, to run once:
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECO, HIGH);
  DISTANCIA = DURACION/58.2;
  Serial.println(DISTANCIA);
  delay(200); 
  
}
