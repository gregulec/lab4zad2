#include "Cylinder.h"
#include "Circle.h"
#include <iostream>
using namespace std;

Cylinder::Cylinder(double radius, double height) : Circle(radius), height(height){
	cout << "Konstruktor walec";
}


Cylinder::~Cylinder()
{
	cout << "Dekonstruktor walec";
}

void Cylinder::area(){
	cout << "pole walec";
	//return 2 * Circle::area() + height * 2 * 3.14*radius;
}
/*
double Cylinder::volume(){
	return Circle::area()*height;
}*/