/**
* Rebecca Donohoe
* PE 2
* 09/05/18
* This program defines an n-dimensional point and calculates the
* distance between two points. 
*/

#ifndef _POINT_H
#define _POINT_H

#include <iostream>
#include <vector>

using namespace std;

class Point {
	public:
		Point(vector<int> v);
		double distance(Point b);
		int getDimension(int dimension);
		int getSize();
		
	private:
		vector<int> dim;
};
#endif