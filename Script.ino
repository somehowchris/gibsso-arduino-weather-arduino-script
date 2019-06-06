#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN A0
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(07, INPUT);
}

void loop() {
  double tempReading = analogRead(07);
  double tempC = tempReading / 9.31;
  Serial.println("Temp1:"+String(tempC));

  float h = dht.readHumidity();    // Lesen der Luftfeuchtigkeit und speichern in die Variable h
  float t = dht.readTemperature(); // Lesen der Temperatur in °C und speichern in die Variable t

  Serial.println(String(h));
  Serial.println(String(t));

  int light = analogRead(A0);
  Serial.println("Lightintensity:"+String(light));
  delay(1000);
}