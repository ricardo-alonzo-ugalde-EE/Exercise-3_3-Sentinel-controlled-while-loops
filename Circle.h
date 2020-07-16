/*
circle class function prototypes and variable declarations
keep headers free of implementations
keep constructors in .cpp.
*/
#include <iostream>
using namespace std;


class circle
{
public:
	double diameter;
	double area;
	double circumference;
	double PI = 3.14;

public: // test function declaration
	void testyTest();

public: // class constructor returns nothing
	circle(double circDiamter, double circCirc, double circArea);

public:
	double getDiameter();

public:
	double getCircumferernce();

public:
	double getArea();

};