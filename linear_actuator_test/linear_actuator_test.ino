const int relay1 =2;
const int relay2 =3;
void setup() {
  // put your setup code here, to run once:
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
}

void loop() {
  long long int pull=400000;
  long long int push=400000;
  while(push--){
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, LOW);
  }
  while(pull--){
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, HIGH);
  }
  
}
