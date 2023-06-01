#include "SUVS3.h"
#include <iostream>
void SUV::setSparewheels(int ii) {
	spareWheels = ii;
}
int SUV::getSparewheels() {
	return spareWheels;
};
float SUV::getTotalPrice() {
	return (this->wheels * 100.0 + this->price);
}
void SUV::klaxon(int ii) {
	for (int i = 0; i < ii; i++) {
		std::cout << "Beep\n";
	}
}
void SUV::Repair() {
	if (carAge >= 5) {
		std::cout << "Repair\n";
	}
	else {
		std::cout << "Not yet\n";
	}
}
void SUV::setcarNumber(int n) {
	carNumber = n;
}
int SUV::getcarNumber() {
	return carNumber;
}