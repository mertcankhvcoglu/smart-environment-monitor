#include <iostream>
#include "Sensor.h"
#include "DHT22Sensor.h"
#include "LightSensor.h"


/* Aslında sensor.h, dht22sensor.h üzerinden indirect include ediliyor.
3. satırı eklemesek de olur ancak proje büyüdükçe kafa karışıklığını önlemek için
iyi bir alışkanlık */

int main()
{
	DHT22Sensor dhtSensor1; // on stack
	LightSensor lightSensor1;
	
	Sensor* sensorPtr1 = &dhtSensor1;
	Sensor* sensorPtr2 = &lightSensor1;

	Sensor* sensorPool[2];
	sensorPool[0] = &dhtSensor1;
	sensorPool[1] = &lightSensor1;

	for (int i = 0; i < sizeof(sensorPool) / sizeof(sensorPool[0]); i++) {
		sensorPool[i]->begin();
	}

	// Simulation loop
	for (int i = 0; i < sizeof(sensorPool) / sizeof(sensorPool[0]); i++) {
		int count = 5; 
		while (count > 0){
			if (sensorPool[i] == &dhtSensor1) {
				std::cout << "Temperature: " << sensorPool[i]->read() << std::endl;
				count--;
			}
			else {
				std::cout << "Lux: " << sensorPool[i]->read() << std::endl;
				count--;
			}			
		}		
	}
	return 0;
}
