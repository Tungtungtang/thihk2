#pragma once
#include "Shape.h"
class RecTangle :
	virtual public Shape
{
protected:
	int nLength, nWidth;
public:
	int getLength();
	int getWidth();
	void setLength(int nLength);
	void setWidth(int nWidth);
	void print();
	string toString();
	double getArea();
	RecTangle(void) : Shape()
	{
		this->nLength = 1;
		this->nWidth = 1;
	}
	RecTangle(string sColor, int nLength, int nWidth) : Shape(sColor)
	{
		this->nLength = nLength;
		this->nWidth = nWidth;
	}
	virtual ~RecTangle(void){};
};

