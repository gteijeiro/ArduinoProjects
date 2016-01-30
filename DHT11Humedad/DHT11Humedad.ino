#include <DHT.h>

#define dht_pin A0
DHT sensorTemperatura(dht_pin, DHT11);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.print("Humedad = ");
	Serial.print(sensorTemperatura.readHumidity());
	Serial.print(" % Temperatura = ");
	Serial.print(sensorTemperatura.readTemperature());
	Serial.println(" C");
	delay(4000);
}
