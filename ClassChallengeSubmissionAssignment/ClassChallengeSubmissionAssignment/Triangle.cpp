#include "Triangle.h"
#include <string>
#include <iostream>
using namespace std;

Triangle::Triangle(double b, double h, const string& c)
	: Shape(c), base(b), height(h)
{
	if (b < 0 || h < 0) {
		cout << "Base and height must be non-negative. Setting to 0.\n";
		base = (b < 0) ? 0 : b;
		height = (h < 0) ? 0 : h;
	}
}

double Triangle::getArea() const {
	return 0.5 * base * height;
}
