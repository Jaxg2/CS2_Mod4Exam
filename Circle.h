#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle :  public Shape
{	
private:

public:
	Circle(string innerShape);
	virtual string describe();
	using Shape::Shape;
};

#endif