#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double radius){
	this->radius = radius;
	cout << "Konstruktor kolo";
}


Circle::~Circle()
{
	cout << "Dekonstruktor kolo";
}

void Circle::area(){
	cout << "pole kolo";
	//return 3.14*radius*radius;
}
