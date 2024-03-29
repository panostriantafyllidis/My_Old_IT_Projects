// Easter_HW[edited].cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

class RoundShapes
{
protected:
	double r;
	int height;

public:

	void setHeight()
	{
		cin >> height;
	}
	void setRadius()
	{
		cin >> r;
	}
};
class Circle : public RoundShapes
{
public:
	double GetArea()
	{
		return (3.14 * pow(r, 2));
	}
	double GetCircumference()
	{
		return (2 * 3.14 * r);
	}

};
class SemiCircle : public RoundShapes
{
public:
	double GetArea()
	{
		return ((3.14 * pow(r, 2)) / 2);
	}
	double GetCircumference()
	{
		return ((3.14 * 2 * r) / 2 + 2 * r);
	}
};
class Quadrant : public RoundShapes
{
public:
	double GetArea()
	{
		return ((3.14 * pow(r, 2)) / 4);
	}
	double GetCircumference()
	{
		return ((3.14 * 2 * r) / 4 + 2 * r);
	}
};


int main()
{


	cout << "Give the radius and heigh for the calculations : " << endl;

	Circle C1;
	C1.setRadius();
	C1.setHeight();
	cout << "The     area       of Circle      is : " << C1.GetArea() << endl;
	cout << "The  circumference of Circle      is : " << C1.GetCircumference() << endl;
	cout << endl;

	SemiCircle SC1;
	SC1.setRadius();
	SC1.setHeight();
	cout << "The     area       of semi Circle is : " << SC1.GetArea() << endl;
	cout << "The  circumference of semi Circle is : " << SC1.GetCircumference() << endl;
	cout << endl;

	Quadrant Q1;
	Q1.setRadius();
	Q1.setHeight();
	cout << "The     area       of Quadrant    is : " << Q1.GetArea() << endl;
	cout << "The  circumference of Quadrant    is : " << Q1.GetCircumference() << endl;
	cout << endl;

	return 0;
}

/*
#include <iostream>
using namespace std;
class Circle
{
private:
	double radius;

public:
		double getArea(){
		return 3.14*radius*radius;
}

double setRadius(double r)
{
	radius=r;
}

void operator ++()
{
	radius++;
}

};
class Cylinder{
private:
	double height;
	Circle c;
public:
	Cylinder(Circle c1,double h){
	c=c1;
	height=h;
}

double getVolume()
{
	return c.getArea()*height;
}
};

int main(){
Circle c1;
c1.setRadius(5.0);
cout<<"Area of c1:  "<<c1.getArea()<<endl;
Cylinder cyl1(c1,7);
cout<<"Volume of cyl1 "<<cyl1.getVolume()<<endl;
}
*/