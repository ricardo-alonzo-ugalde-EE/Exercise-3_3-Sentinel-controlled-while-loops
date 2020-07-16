#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	circle circle_1(1, 4, 6);
	circle_1.testyTest();

	cout <<"The area is "<< circle_1.getArea() << endl;
	cout << "The circumference is " << circle_1.getCircumferernce() <<endl;
	cout << "The diameter is " << circle_1.getDiameter() << endl;
	


	return 0;
}