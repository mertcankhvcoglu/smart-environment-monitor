#ifndef SENSOR_H
#define SENSOR_H


class Sensor {
public: 
	Sensor();

	virtual ~Sensor();

	virtual bool begin() = 0;

	virtual float read() = 0;
};

#endif 