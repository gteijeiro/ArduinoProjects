int redLed = 8;
int grenLed = 9;
int blueLed = 10;

void setup()
{
	pinMode(redLed, OUTPUT);
	pinMode(grenLed, OUTPUT);
	pinMode(blueLed, OUTPUT);
}

void loop()
{
	digitalWrite(redLed, HIGH);
	digitalWrite(grenLed, LOW);
	digitalWrite(blueLed, LOW);
	delay(1000);
	digitalWrite(redLed, LOW);
	digitalWrite(grenLed, HIGH);
	digitalWrite(blueLed, LOW);
	delay(1000);
	digitalWrite(redLed, LOW);
	digitalWrite(grenLed, LOW);
	digitalWrite(blueLed, HIGH);
	delay(1000);
}
