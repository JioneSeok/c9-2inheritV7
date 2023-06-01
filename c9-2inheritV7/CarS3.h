#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), carAge(5) {};
	Car(float, int, float, int);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
protected:
	float price;
	void speedUp(float);
	void speedDown(float);
	int carAge;
};