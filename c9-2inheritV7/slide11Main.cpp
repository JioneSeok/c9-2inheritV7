#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	SUV* newSUV = new SUV();

	newSUV->Repair();
	newSUV->setcarNumber(9441);
	cout << newSUV->getcarNumber() << endl;

	delete newSUV;
}
