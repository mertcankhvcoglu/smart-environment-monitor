#ifndef LIGHTSENSOR_H
#define LIGHTSENSOR_H
#include "Sensor.h"

class LightSensor : public Sensor {
public:
	LightSensor();
	~LightSensor();

	bool begin() override;
	float read() override;

private:
	float simulatedLux = 100.0f; // mock data ışık şiddeti
};
#endif 