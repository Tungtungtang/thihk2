#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
protected:
	int nRa;
public:
	int getRadius();
	void setRadius(int nRa);
	void print();
	double getArea();
	string toString();
	Circle(void) : Shape()
	{
		this->nRa = 1;
	}
	Circle(string sColor, int nRa) : Shape(sColor)
	{
		this->nRa = nRa;
	}
	virtual ~Circle(void){};
};

