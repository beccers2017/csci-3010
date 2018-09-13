/**
* Rebecca Donohoe
* PE 2
* This program defines a 3 dimensional point(s) and calculates the
* distance between two points.
*/
#ifndef _POINT_H
#define _POINT_H

#include <iostream>

using namespace std;

class Point {
	public:
		Point(double x, double y, double z);
		double distance(Point b);
		double getXCoordinate() const;
		double getYCoordinate() const;
		double getZCoordinate() const;
		
	private:
		double xVal;
		double yVal;
		double zVal;

};
#endif