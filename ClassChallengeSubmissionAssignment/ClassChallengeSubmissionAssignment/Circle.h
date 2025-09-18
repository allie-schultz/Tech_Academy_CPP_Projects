#pragma once
#include "Shape.h";
#include <string>
using namespace std;
class Circle : public Shape {
private:
	double radius;

public:	
	Circle(double r, const string& c = "undefined");
	double getArea() const override;
};

