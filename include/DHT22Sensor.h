//DHT 22 bir ısı ve nem sensörüdür.
#ifndef DHT22SENSOR_H
#define DHT22SENSOR_H
#include "Sensor.h"

class DHT22Sensor : public Sensor {
public:
	DHT22Sensor(); // constr
	~DHT22Sensor(); // destrc
	bool begin() override;
	float read() override;

private:
	float simulatedTemperature = 20.0f; // mock data sıcaklık
	float simulatedHumidity = 50.0f; // mock data nem
};

#endif 
