#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
	string name;
	int innerShape;

public:
	Shape();
	string getName();
	int getinnerShape();
	virtual string describe() = 0;
};

#endif