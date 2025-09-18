// ClassChallengeSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main()
{
	Rectangle rect(5.0, 3.0, "blue");
	cout << "The area of the " << rect.color << " rectangle is: " << rect.getArea() << '\n';

	Triangle tri(4.0, 6.0, "red");
	cout << "The area of the " << tri.color << " triangle is: " << tri.getArea() << '\n';

	Circle circ(2.5, "green");
	cout << "The area of the " << circ.color << " circle is: " << circ.getArea() << '\n';
}
