#include <DHT.h>
#define DHTPIN 17          // Hier die Pin Nummer eintragen wo der Sensor angeschlossen ist
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();     //Lesen der Luftfeuchtigkeit und speichern in die Variable h
  float t = dht.readTemperature();  //Lesen der Temperatur in °C und speichern in die Variable t

  int light = analogRead(A0);
  Serial.println("light:"+String(light));
  Serial.println("temperature:"+String(t));
  Serial.println("humidity:"+String(h));
  delay(1000);
}