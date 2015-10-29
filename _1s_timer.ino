int delaytime = 2*3600*1000; // 2 hours
int ontime = 2500; // 1 second

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(2, LOW);
  Serial.println("on");
  delay(ontime);
  digitalWrite(2, HIGH); // for this particular relay, low turns it on...
  Serial.println("off");
  delay(delaytime);
}
