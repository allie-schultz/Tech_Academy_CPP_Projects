#pragma once
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
private: //Private Keyword Challenge
	int secret;
	void secretFunction();

protected: // Protected Keyword Challenge
	int hiddenNumber; // only accessible in derived classes

public:
	string name;
	int age;

	MyClass(string n, int v, int s, int hidden);

	void showInfo();
	void showInfoAgain() {
		cout << "MyClass name: " << name << ", age: " << age << "\n";
	};

	virtual void introduce(); //polymorphic function

};

//Single Inheritance
class ChildClass : public MyClass {
public:
	ChildClass(string n, int v, int s, int hidden);
	void doubleHidden();  // accesses protected hiddenNumber

	void introduce() override; //polumorphism
};

//Multilevel Inheritance
class GrandChildClass : public ChildClass {
public:
	GrandChildClass(string n, int v, int s, int hidden);
	void showSomething();

	void introduce() override;
};

//Simple extra base class (for multiple inheritance)
class ExtraFeatures {
public:
	void greet();
};

//Multiple Inheritance
class MultiClass : public MyClass, public ExtraFeatures {
public:
	MultiClass(string n, int v, int s, int hidden);
	void showMulti();

	void introduce() override;
};

