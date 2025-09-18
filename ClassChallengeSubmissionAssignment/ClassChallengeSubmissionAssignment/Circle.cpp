#include "Circle.h"
#include <string>
#include <iostream>
#include <numbers>
using namespace std;

Circle::Circle(double r, const string& c)
	: Shape(c), radius(r)
{
	if (r < 0) {
		cout << "Radius must be non-negative. Setting to 0.\n";
		radius = 0;
	}
}

const double pi = 3.14159265358979323846;

double Circle::getArea() const {
	return pi * radius * radius;
}

