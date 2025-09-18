#pragma once
#include "Shape.h";
#include <string>
using namespace std;
class Triangle : public Shape {

private:
	double base;
	double height;

public:
	Triangle(double b, double h, const string& c = "undefined");
	double getArea() const override;
};

