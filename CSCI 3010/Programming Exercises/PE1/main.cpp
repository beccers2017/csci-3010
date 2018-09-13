/**
* Rebecca Donohoe
* PE 1
* This program defines a 3 dimensional point(s) and calculates the
* distance between two points.
*/

#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	double x1, y1, z1, x2, y2, z2;

	cout << "Enter the values for point 1: " << endl;
	cin >> x1;
	cin >> y1;
	cin >> z1;
	
	Point p1(x1, y1, z1);

	cout << "Enter the values for point 2: " << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;

	Point p2(x2, y2, z2);
	
	cout << "The distance between point 1 and point 2 is: ";
	p1.distance(p2);
	cout << endl;
}