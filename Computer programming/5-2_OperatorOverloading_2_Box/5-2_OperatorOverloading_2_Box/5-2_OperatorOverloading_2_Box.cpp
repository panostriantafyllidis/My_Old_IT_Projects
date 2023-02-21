// 5-2_OperatorOverloading_2_Box.cpp : Defines the entry point for the console application.
//

/*
Create a class named "Box" with 3 data members (length, breadth,height) 
and using operator overloading make sure that you can do the following 
things in your main program:

a) Add 2 boxes : e.g. b3=b2+b1;
b) Subtract 2 boxes : e.g. b3=b2-b1;
b) Assign the values of one box to another box : e.g. b2=b1;

*/

#include "stdafx.h"
#include <iostream>
using namespace std; 

class Box
{
private:
	double length, breadth, height;
public:
	void setValues(double x,double y, double  z)
	{
		length = x;
		breadth = y;
		height  = z;
	}
	double  getVolume()
	{
		return length* breadth* height;
	}
	void operator ++()
	{
		height++;
		length++;
		breadth++;
	}
	Box   operator + (Box Bo)
	{
		Box NewBox;
		NewBox.height = this->height + Bo.height;
		NewBox.length = this->length + Bo.length;
		NewBox.breadth = this->breadth + Bo.breadth;
		return NewBox;
	}

};
int  main()
{
	double a, b, c, d,e,f;
	cout << "Give values for Box 1 :" << endl;
	cin >> a >> b >> c;
	Box B1;
	B1.setValues(a, b, c);
	cout << "The volume of Box 1 is : " <<B1.getVolume() <<endl;
	cout << "Give values for Box 2 :" << endl;
	cin >> d >> e >> f;
	Box B2;
	B2.setValues(d, e, f);
	cout << "The volume of Box 1 is : " << B2.getVolume() << endl;
	++B1;
	Box B3;
	B3 = B1 + B2;
	cout << "The volume of the box b3 is:  " << B3.getVolume() << endl;
	
	return 0;

}