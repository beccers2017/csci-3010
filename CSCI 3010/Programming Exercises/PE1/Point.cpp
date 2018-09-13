/**
* Rebecca Donohoe
* PE 1
* This program defines a 3 dimensional point(s) and calculates the
* distance between two points.
*/

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point(double x, double y, double z) {
	xVal = x;
	yVal = y;
	zVal = z;
}

double Point::getXCoordinate() const {
	return xVal;
}

double Point::getYCoordinate() const {
	return yVal;
}

double Point::getZCoordinate() const {
	return zVal;
}

/**
	Calculates the euclidian distance between one point and another.
	@param point b, the second point that the distance will be calculated from.
	@return euclidianDistance, the distance between two points.
*/

double Point::distance(Point b) {
	double euclidianDistance = sqrt((pow(this->xVal - b.getXCoordinate(), 2)) + (pow(this->yVal - b.getYCoordinate(), 2)) + (pow(this->zVal - b.getZCoordinate(), 2)));
	cout << euclidianDistance;
	return euclidianDistance;
}