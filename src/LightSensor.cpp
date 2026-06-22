#include "LightSensor.h"
#include <iostream>

LightSensor::LightSensor() {};
LightSensor::~LightSensor() {};

bool LightSensor::begin() {
	std::cout << "Light Sensor basariyla baslatildi!" << std::endl;
	return true;
}

float LightSensor::read() {
	simulatedLux -= 10; // hava karardı
	return simulatedLux;
}
