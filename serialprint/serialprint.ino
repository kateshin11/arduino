
int a = 42; 
char b = 'G';

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(a);
  Serial.print(a);
  Serial.println(b);
  delay(1000);
}
