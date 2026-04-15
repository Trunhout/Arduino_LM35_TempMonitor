/*
* Du an: Doc nhiet do LM35 va gui qua Serial
* Mon: Mang Cam Bien - Tuan 03
*/

int adcValues[2]; 
float nhietDo[2]; 

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Doc 2 kenh A0 va A1
  adcValues[0] = analogRead(A0);
  adcValues[1] = analogRead(A1);
  
  // Tinh nhiet do
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  
  // In ra dinh dang CSV
  Serial.print(nhietDo[0], 1);
  Serial.print(",");
  Serial.println(nhietDo[1], 1);
  
  delay(1000);
}