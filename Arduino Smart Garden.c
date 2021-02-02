
// Sketch to read from DHT11 & four capacative soil moisture monitors


#include "DHT.h"

#define DHTPIN 2     

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11 
//#define DHTTYPE DHT22   // DHT 22  (AM2302)
//#define DHTTYPE DHT21   // DHT 21 (AM2301)


DHT dht(DHTPIN, DHTTYPE);
const int AirValue1 = 655;   //you need to replace this value with Value_1
const int WaterValue1 = 346;  //you need to replace this value with Value_2
int soilMoistureValue1 = 0;
int soilmoisturepercent1=0;
const int AirValue2 = 606;   //you need to replace this value with Value_1
const int WaterValue2 = 252;  //you need to replace this value with Value_2
int soilMoistureValue2 = 0;
int soilmoisturepercent2=0;
const int AirValue3 = 606;   //you need to replace this value with Value_1
const int WaterValue3 = 256;  //you need to replace this value with Value_2
int soilMoistureValue3 = 0;
int soilmoisturepercent3=0;
const int AirValue4 = 601;   //you need to replace this value with Value_1
const int WaterValue4 = 261;  //you need to replace this value with Value_2
int soilMoistureValue4 = 0;
int soilmoisturepercent4=0;
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  dht.begin();
}
void loop() {
   delay(10000);
  // Reading temperature or humidity takes about 250 milliseconds!
  
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  //Serial.print(F(" Humidity: "));
  Serial.print(h);
  Serial.println(F("%"));
  Serial.print(t);
  Serial.println(F("*C "));
//  Serial.print(f);
//  Serial.print(F("F  Heat index: "));
//  Serial.print(hic);
//  Serial.print(F("C "));
//  Serial.print(hif);
//  Serial.print(F("F"));

  
soilMoistureValue1 = analogRead(A0);  
Serial.println(soilMoistureValue1);
soilmoisturepercent1 = map(soilMoistureValue1, AirValue1, WaterValue1, 0, 100);
if(soilmoisturepercent1 >= 100)
{
  Serial.println("100 a");
}
else if(soilmoisturepercent1 <=0)
{
  Serial.println("0 a");
}
else if(soilmoisturepercent1 >0 && soilmoisturepercent1 < 100)
{
  Serial.print(soilmoisturepercent1);
  Serial.println("a");
  
}
  

{
soilMoistureValue2 = analogRead(A1);  
Serial.println(soilMoistureValue2);
soilmoisturepercent2 = map(soilMoistureValue2, AirValue2, WaterValue2, 0, 100);
if(soilmoisturepercent2 >= 100)
{
  Serial.println("100 b");
}
else if(soilmoisturepercent3 <=0)
{
  Serial.println("0 b");
}
else if(soilmoisturepercent2 >0 && soilmoisturepercent2 < 100)
{
  Serial.print(soilmoisturepercent2);
  Serial.println("b");
  
  
}
{
soilMoistureValue3 = analogRead(A2);  
Serial.println(soilMoistureValue3);
soilmoisturepercent3 = map(soilMoistureValue3, AirValue3, WaterValue3, 0, 100);
if(soilmoisturepercent3 >= 100)
{
  Serial.println("100 d");
}
else if(soilmoisturepercent3 <=0)
{
  Serial.println("0 d");
}
else if(soilmoisturepercent3 >0 && soilmoisturepercent3 < 100)
{
  Serial.print(soilmoisturepercent3);
  Serial.println("d");
  
  
}  
{
soilMoistureValue4 = analogRead(A3);  
Serial.println(soilMoistureValue4);
soilmoisturepercent4 = map(soilMoistureValue4, AirValue4, WaterValue4, 0, 100);
if(soilmoisturepercent4 >= 100)
{
  Serial.println("100 e");
}
else if(soilmoisturepercent4 <=0)
{
  Serial.println("0 e");
}
else if(soilmoisturepercent4 >0 && soilmoisturepercent4 < 100)
{
  Serial.print(soilmoisturepercent4);
  Serial.println("e");
  
  
}  
}}}}