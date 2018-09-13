/**
* Rebecca Donohoe
* PE 2
* 09/05/18
* This program defines an n-dimensional point and calculates the
* distance between two points. 
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

#include "Point.h"

using namespace std;

Point::Point(vector<int> v) {
	dim = v;
}

/**
* Gets the value at a specific index point in the vector
* @param point b, the second point that the distance will be calculated from
* @returns the value at that index value
*/
int Point::getDimension(int dimension) {
	if(dim.size() >= dimension) {
		return dim[dimension];
	} else {
		throw invalid_argument("Invalid dimension");
	}
}

int Point::getSize() {
	return dim.size();
}

/**
	Calculates the euclidian distance between one point and another.
	@param point b, the second point that the distance will be calculated from.
	@returns Distance, the distance between two points.
*/
double Point::distance(Point b) {
	if(b.getSize() == dim.size()) {
		double sum = 0;
		for(int i = 0; i < dim.size()-1; i++) {
			sum += pow(b.getDimension(i) - dim[i], 2);
		}
		return sqrt(sum);
	}
	else {
		throw invalid_argument("Cannot calculate the distance of points of different dimensions");
	}
}