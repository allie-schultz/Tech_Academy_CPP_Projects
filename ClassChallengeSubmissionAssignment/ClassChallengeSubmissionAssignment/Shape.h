#pragma once
#include <string>
using namespace std;
class Shape
{
public:
	string color;
	explicit Shape(const string& color = "undefined") : color(color) {}
	virtual ~Shape() = default;
	virtual double getArea() const = 0;

};

