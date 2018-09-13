/**
* Rebecca Donohoe
* PE 2
* 09/05/18
* This program defines an n-dimensional point and calculates the
* distance between two points. 
*/

#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

int main() {
	char input;
	int i;
	vector<int> v1;
	vector<int> v2;
	
	cout << "Enter the values for point 1, ending with the letter E when finished." << endl;
	
	while(input != 'E') {
		cin >> input;
		v1.push_back(input);
		i++;
	}
	

	cout << "Enter the values for point 2, ending with the letter E when finished." << endl;
	char input1;
	while(input1 != 'E') {
		cin >> input1;
		v2.push_back(input1);
		i++;
	}

	Point p1(v1);
	Point p2(v2);
	
	cout << "The distance between point 1 and point 2 is: ";
	cout << p1.distance(p2);
	cout << endl;
}