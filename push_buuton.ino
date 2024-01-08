int  bstate = 0;
int button = 13 ;
int led1 = 11 ;

void setup() {
  Serial.begin(9600);
  pinMode (button , INPUT);
  pinMode(led1 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int s = digitalRead(button);
  if (s == 0) {
    bstate = !bstate ;
    digitalWrite(led1 , bstate );
    delay(300);
  }
}
