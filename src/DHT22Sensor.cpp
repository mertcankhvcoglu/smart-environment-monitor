#include "DHT22Sensor.h"
#include <iostream>

DHT22Sensor::DHT22Sensor() {};
DHT22Sensor::~DHT22Sensor() {};

bool DHT22Sensor::begin() {
	std::cout << "DHT22 sensoru basariyla baslatildi!" << std::endl;
	return true;
}

float DHT22Sensor::read() {
	simulatedTemperature += 0.5;
	return simulatedTemperature;
}