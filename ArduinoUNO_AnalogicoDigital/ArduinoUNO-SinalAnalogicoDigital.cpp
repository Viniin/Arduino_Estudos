// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
}

void loop()
{
  Serial.print("Imprimir canal Analogico: ");
  Serial.println(analogRead(A0));
  Serial.println("=======================");
  Serial.print("Imprimir canal Digital: ");
  Serial.println(digitalRead(2));
  delay(10); // Delay a little bit to improve simulation performance
}