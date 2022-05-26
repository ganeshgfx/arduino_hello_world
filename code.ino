int DELAY = 1000;
int COUNT = 0;
bool DOONCE = true;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
  
  digitalWrite(13, HIGH);
  digitalWrite(9, LOW);
  delay(DELAY);
  digitalWrite(13, LOW);
  digitalWrite(9, HIGH);
  delay(DELAY);
  if(DELAY>100){
    DELAY-=100;
  }else{
    DELAY = 99;
  }
}
