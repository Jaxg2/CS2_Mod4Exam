#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	string name;
	string innerShape;

public:
	Shape();
	string getName();
	string getinnerShape();
	virtual string describe() = 0;
};

#endif