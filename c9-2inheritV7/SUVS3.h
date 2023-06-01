#pragma once
#include "CarS3.h"
class SUV : public Car {
private:
	int spareWheels;
	int carNumber;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
	void Repair();
	void setcarNumber(int);
	int getcarNumber();
};
