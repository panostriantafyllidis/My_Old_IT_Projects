// 4-25_OperatorOverLoading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {

private:
	double radius;

public:
	double getArea() {
		return 3.14*radius*radius;
	}
	void setRadius(double r) {
		radius = r;
	}
	void operator ++() {
		radius++;
	}
	Circle operator+(Circle c) {
		Circle cir;
		cir.radius = this->radius + c.radius;
		return cir;
	}
};


// Main function for the program
int main() {

	Circle c1;
	c1.setRadius(5.0);
	cout << "Area of c1 : " << c1.getArea() << endl;

	Circle c2;
	c2.setRadius(7.0);
	cout << "Area of c2 : " << c2.getArea() << endl;

	Circle c3;
	c3 = c1 + c2;
	cout << "Area of c3 : " << c3.getArea() << endl;

	return 0;

}
