#include <iostream>
#include "Circle.h"
#include "Cylinder.h"
using namespace std;

int main(){
	
	/*Circle circle(2.0);
	cout << circle.area() << endl;
	Cylinder cylinder(2.0, 2.0);
	cout << cylinder.area() << endl << cylinder.volume() << endl;
	cout << endl << endl; */
	Cylinder *e1;
	e1 = new Cylinder(3.0, 3.0);
	Circle o2 = *e1;
	o2.area();
	
}