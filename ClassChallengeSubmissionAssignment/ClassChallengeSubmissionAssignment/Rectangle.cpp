#include "Rectangle.h"
#include <string>
#include <iostream>
using namespace std;

Rectangle::Rectangle(double w, double h, const string& c) 
	: Shape(c), width(w), height(h) 
{
	if (w < 0 || h < 0) {
		cout << "Width and height must be non-negative. Setting to 0.\n";
		width = (w < 0) ? 0 : w;
		height = (h < 0) ? 0 : h;
	}
}

double Rectangle::getArea() const {
	return width * height;
}

