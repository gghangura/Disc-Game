#include <iostream>
#include <cstdlib>
#include <ctime>
#include "class.h"

;using namespace std;


Disc::Disc()
{
	radius = 0;
	xCoordinate = 0;
	yCoordinate = 0;
	srand(time(NULL));
}

int Disc::GetRadius() {
	return radius;
}

int Disc::GetXCoordinate() {
	return xCoordinate;
}

int Disc::GetYCoordinate() {
	return yCoordinate;
}

void Disc::Throw(int maxX, int maxY) {
	int random = rand() % maxX ;
	xCoordinate = random;
	random = rand() % maxY;
	yCoordinate = random;
}

void Disc::SetRadius(int rad) {
	radius = rad;
}

Disc::~Disc() {

}
