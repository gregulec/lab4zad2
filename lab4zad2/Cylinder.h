#pragma once
#include "Circle.h"
#include <iostream>
using namespace std;

class Cylinder:public Circle{
protected:
	double height;
public:
	Cylinder(double radius, double height);
	~Cylinder();
	virtual void area();
	//virtual double volume();

};

