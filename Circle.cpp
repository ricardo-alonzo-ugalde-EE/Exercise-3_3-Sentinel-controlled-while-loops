/*
implementation file
*/
#include "Circle.h" // header file in local directory
#include <iostream> // header in standard library
#include <cmath>

using namespace std; // avoid having to qualify every mention of cout, cin, endl, etc.


// implementataion of the function testyTest from invoice.h to testy test things
void circle::testyTest()
{
	cout << "Testing, testing. This is the testy test." << endl;
}

circle::circle(double circDiamter, double circCirc, double circArea)
{
	diameter = circDiamter;
	circumference = circCirc;
	area = circArea;
	
}

double circle::getDiameter()
{
	if (diameter > 0)
	{
		return circumference / PI;
	}

	else
	{
		cout << "Error. Cannot compute." << endl;
	}
	
}

double circle::getCircumferernce()
{
	if (diameter > 0)
	{
		return PI * diameter;
	}

	else
	{
		cout << "Error. Cannot compute." << endl;
	}
}

double circle::getArea()
{
	if (diameter > 0)
	{
		return (PI / 4) * pow(diameter, 2);
	}

	else
	{
		cout << "Error. Cannot compute." << endl;
	}

	
}