// Cylinder_from_Circle.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
class Circle
{
private:
	double radius;

public:
	double getArea() {
		return 3.14*radius*radius;
	}

	double setRadius(double r)
	{
		radius = r;
	}

	void operator ++()
	{
		radius++;
	}

};
class Cylinder {
private:
	double height;
	Circle c;
public:
	Cylinder(Circle c1, double h) 
	{
		c = c1;
		height = h;
	}

	double getVolume()
	{
		return c.getArea()*height;
	}
};

int main() 
{
	Circle c1;
	c1.setRadius(5.0);
	cout << "Area of c1:  " << c1.getArea() << endl;
	Cylinder cyl1(c1, 7);
	cout << "Volume of cyl1 " << cyl1.getVolume() << endl;

	return 0;
}