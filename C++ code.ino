// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(15); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(15); // Wait for 1000 millisecond(s)
}
