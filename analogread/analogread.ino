#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2      // GPIO2 pin use ho rahi hai
#define DHTTYPE DHT11 // DHT sensor ka type (DHT11 ya DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); 
  Serial.println(F("Initializing DHT sensor..."));
  dht.begin();  // Sensor initialization
}

void loop() {
  delay(2000); // Har 2 second baad data read karein

  float humidity = dht.readHumidity();       // Humidity read karein
  float temperature = dht.readTemperature(); // Temperature read karein

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println(F("Failed to read from sensor!")); // Agar reading fail ho jaye
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(humidity);
  Serial.print(F("%  Temperature: "));
  Serial.print(temperature);
  Serial.println(F("°C"));
}
