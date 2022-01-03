#pragma once
#include <iostream>
using namespace std;
class Circle{
protected:
	double radius;
public:
	Circle(double radius);
	~Circle();
	virtual void area();
};

