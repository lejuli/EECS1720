const int sensorPin = A0;
const float baselineTemp = 20.0;
void setup(){
 Serial.begin(9600); // open a serial port
 for(int pinNumber = 2; pinNumber<5; pinNumber++){
 pinMode(pinNumber,OUTPUT);
 digitalWrite(pinNumber, LOW);
 }
}
void loop(){
 int sensorVal = analogRead(sensorPin);
 Serial.print("Sensor Value: ");
 Serial.print(sensorVal);
 // convert the ADC reading to voltage
 float voltage = (sensorVal/1024.0) * 5.0;
 Serial.print(", Volts: ");
 Serial.print(voltage);
 Serial.print(", degrees C: ");
 // convert the voltage to temperature in degrees
 float temperature = (voltage - .5) * 100;
 Serial.println(temperature);}
