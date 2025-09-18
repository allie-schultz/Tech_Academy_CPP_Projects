// cpp_challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "MyClass.h";
#include <exception>
using namespace std;

// Function prototypes
void myFunction();
int add(int a, int b);
float add(float a, float b);
void changeValue(int& ref);

int main()
{
    //Hello World Challenge
    cout << "Hello World!\n";

    //C++ Output Challenge
	cout << "Output Challenge Complete!\n";

    //New Lines Challenge
	cout << "By using 2 \\n charcters you can create a blank line!\n\nSee?\n";

	//Variables Challenge
	char character = 'A';
	int num1 = 10, num2 = 20;
	double decimalNum = 5.5;
	bool isTrue = true;
	string text = "This is a string";
	cout << "The value of the int variable num1 is: " << num1 << "\n";

	//Const Challenge
	const double pi = 3.14;
	cout << "The value of the constant variable pi is: " << pi << " and it cannot be changed.\n";

	//User Input Challenge
	string name;
	cout << "What is your name: ";
	cin >> name;
	cout << "Hello, " << name << "!\n";

	//Numbers and Float Challenge
	float floatNum = 2e2;
	cout << "2e2 in float is: " << floatNum << "\n";

	//String Challenge
	string firstName = "Allie", lastName = "Schultz";
	cout << "Hello, " << firstName + " " + lastName << "!\n";

	//String Functions Challenge
	string word = "Cats";
	cout << word.length() << "\n";
	cout << word[2] << "\n";
	word[0] = 'H';
	cout << word << "\n";

	//Opperators Challenge
	int a = 5, b = 10;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << b * a << "\n";
	cout << b / a << "\n";
	cout << ++a << "\n";

	//Comparison Opperators Challenge
	cout << (a > b) << "\n"; //false (0)
	cout << (a == b) << "\n"; //false (0)
	cout << (a != b) << "\n"; //true (1)
	cout << (a <= b) << "\n"; //true (1)

	//Assignment Opperators Challenge
	int x = 12;
	cout << x << "\n";
	x += 3; // x = 15
	cout << x << "\n";
	x &= 2; // x = 2
	cout << x << "\n";
	x <<= 2; // x = 8
	cout << x << "\n";

	//Logical Opperators Challenge
	cout << ((a < b) && (b < a)) << "\n"; //false (0)
	cout << ((a > b) || (b > a)) << "\n"; //true (1)
	cout << !(a > b) << "\n"; //true (1)

	//Multi Line Comments Challenge
	/* This is a
	multi-line comment*/

	//Getline Function Challenge
	string fullName;
	cout << "What is your full name: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // To ignore any leftover newline characters in the input buffer
	getline (cin, fullName);
	cout << "fullName contains: " << fullName << "\n";

	//Math Functions Challenge
	cout << "The larger number between 5 and 10 is: " << max(5, 10) << "\n";
	cout << "The square root of 64 is: " << sqrt(64) << "\n";	
	cout << "4.63 rounded to the nearest integer is: " << round(4.63) << "\n";
	cout << "The power of 3^4 is: " << pow(3, 4) << "\n";

	//Conditonal Statements Challenge
	cout << "Enter an integer (positive, negative, or zero will be accepted): ";
	int integer;
	cin >> integer;
	if (integer > 0) {
		cout << "The integer is positive.\n";
	}
	else if (integer < 0) {
		cout << "The integer is negative.\n";
	}
	else {
		cout << "The integer is zero.\n";
	}

	cout << "Enter a mnumber to correspond to a day of the week (1-7, Sunday is 1): ";
	int day;
	cin >> day;
	switch (day) {
	case 1:
		cout << "Sunday\n";
		break;
	case 2:
		cout << "Monday\n";
		break;
	case 3:
		cout << "Tuesday\n";
		break;
	case 4:
		cout << "Wednesday\n";
		break;
	case 5:
		cout << "Thursday\n";
		break;
	case 6:
		cout << "Friday\n";
		break;
	case 7:
		cout << "Saturday\n";
		break;
	default:
		cout << "Invalid day number.\n";
		break;
	}

	cout << "Enter a number between 1 and 10: ";
	int number;
	cin >> number;
	string result = (number >= 1 && number <= 10) ? "Valid" : "Invalid";
	cout << result << "\n";

	//While Loop Challenge
	cout << "Enter a positive integer to count down from: ";
	int countdown;
	cin >> countdown;
	while (countdown >= 0) { //while loop not garanteed to run
		cout << countdown << "\n";
		countdown--;
	}

	//Do While Loop Challenge
	int countup = 1;
	do { //do while loop garanteed to run at least once
		cout << countup << "\n";
		countup++;
	} while (countup <= 10);

	//For Loop Challenge
	for (int i = 0; i <= 3; i++) {
		cout << i << "\n";
	}

	//Break and Continue Challenge
	int contandbreak = 1;
	while (true) {
		if (contandbreak == 3) {
			contandbreak++; 
			continue; //skip when x is 3
		}
		if (contandbreak == 5) {
			break; //exit loop when x is 6
		}
		cout << contandbreak << "\n";
		contandbreak++;
	}


	//Array Challenge
	int numbers[5] = { 10, 20, 30, 40, 50 };
	cout << numbers[2] << "\n"; //30

	//Array Loop Challenge
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << "\n";
	}

	//Reference Variable Challenge
	int original = 100;
	int &refVar = original; //refVar is a reference variable to original

	//& Operator Challenge
	cout << "The memory address of original is: " << &original << "\n";

	//Pointer Challenge
	int value = 42;
	int *ptr = &value; //ptr is a pointer to value
	cout << "The memory address stored in value's pointes is <<: " << ptr << "\n";

	//Dereference Operator Challenge
	cout << "The value pointed to by ptr is: " << *ptr << "\n";

	//Main Function Challenge
	myFunction(); //call the function from main

	//Function Challenge
	int sum = add(5, 10); //call the function and store the return value in sum
	float floatSum = add(5.5f, 10.2f); //call the overloaded function and store the return value in floatSum
	int ogNum = 100;
	changeValue(ogNum); //call the function to change the value of value through the reference

	//Class Challenge
	try { //Try
		MyClass obj1("Allie", 19, 22, 10);
		MyClass obj2("Victoria", -14, 74, 7);

		obj1.showInfo();
		obj2.showInfo();
		obj1.showInfoAgain();
		obj2.showInfoAgain();
	}
	catch (const exception& e) {
		cout << "Caught an error: " << e.what() << "\n"; //Catch
	}

	// Test ChildClass
	ChildClass child("Kiddo", 10, 5, 4);
	child.showInfo();
	child.doubleHidden();

	// Test GrandChildClass
	GrandChildClass grandchild("Baby", 5, 2, 3);
	grandchild.showInfo();
	grandchild.showSomething();

	// Test MultiClass
	MultiClass multi("Multi", 30, 11, 8);
	multi.showInfo();
	multi.greet();
	multi.showMulti();


	MyClass* obj3 = new GrandChildClass("Chris", 25, 33, 15);
	MyClass* obj4 = new MultiClass("Taylor", 30, 11, 5);


	obj3->introduce();
	obj4->introduce();

	
	delete obj3;
	delete obj4;
}

//Function (for Main Function Challenge)
void myFunction() {
	cout << "This is myFunction!\n";
}

//Function Challenge
int add(int a, int b) {
	return a + b;
}

float add(float a, float b) { //Function Overloading Challenge
	return a + b;
}

void changeValue(int& ref) { //Reference Variable Challenge
	ref = 200; //change the value of the original variable through the reference
}

//Class Challenge




