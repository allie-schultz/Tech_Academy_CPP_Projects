#include "MyClass.h"

MyClass::MyClass(string n, int v, int s, int hidden) {
    if (v < 0) {
        throw invalid_argument("Age cannot be negative"); //Throw
    }
	name = n;
	age = v;
	secret = s;
	hiddenNumber = hidden;
}

void MyClass::secretFunction() {
	cout << "This is a private function. secret: " << secret << "\n";
}
void MyClass::showInfo() {
	cout << "MyClass name: " << name << ", age: " << age << "\n";
	secretFunction();
}

// ChildClass constructor
ChildClass::ChildClass(string n, int v, int s, int hidden)
    : MyClass(n, v, s, hidden) {
}

// Access the protected hiddenNumber
void ChildClass::doubleHidden() {
    hiddenNumber *= 2;
    cout << "ChildClass doubled hiddenNumber: " << hiddenNumber << "\n";
}

// GrandChildClass constructor
GrandChildClass::GrandChildClass(string n, int v, int s, int hidden)
    : ChildClass(n, v, s, hidden) {
}

void GrandChildClass::showSomething() {
    cout << "GrandChildClass can also see hiddenNumber: " << hiddenNumber << "\n";
}

// ExtraFeatures function
void ExtraFeatures::greet() {
    cout << "Hello from ExtraFeatures!\n";
}

// MultiClass constructor
MultiClass::MultiClass(string n, int v, int s, int hidden)
    : MyClass(n, v, s, hidden) {
}

void MultiClass::showMulti() {
    cout << "MultiClass combines MyClass and ExtraFeatures.\n";
}

void MyClass::introduce() {
    cout << "I'm a plain MyClass object.\n";
}

void ChildClass::introduce() {
    cout << "Hi, I'm ChildClass!\n";
}

void GrandChildClass::introduce() {
    cout << "Hello, I'm GrandChildClass!\n";
}

void MultiClass::introduce() {
    cout << "Hey, I'm MultiClass, with multiple inheritance!\n";
}
