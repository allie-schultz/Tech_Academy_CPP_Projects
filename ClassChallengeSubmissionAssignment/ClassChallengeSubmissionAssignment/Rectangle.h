#pragma once
#include "Shape.h";
#include <string>
using namespace std;
class Rectangle : public Shape {

private:
	double width;
	double height;

public:
	Rectangle(double w, double h, const string& c = "undefined");
	double getArea() const override;


};

