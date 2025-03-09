const int ledPin = 12;
void setup() {
  Serial.begin(9600);

  while(!Serial){
    Serial.println("NO RESULT");
  }

  // put your setup code here, to run once:

}

void loop() {
  Serial.println("Hello World");
  delay(1000);

  
  // put your main code here, to run repeatedly:

}
