// OOPSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h";
using namespace std;

int main()
{
	Dog dog1;
	dog1.breed = "Hound";
	dog1.color = "Brown";
	dog1.height = "2 feet";
	dog1.weight = "60 pounds";

	dog1.Shake();
	dog1.Sit();
	dog1.LayDown();
}

