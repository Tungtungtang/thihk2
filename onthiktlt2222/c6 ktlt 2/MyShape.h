#pragma once
#include "Circle.h"
#include "RecTangle.h"
class MyShape : public Circle, public RecTangle
{
	Circle xCircle;
	RecTangle xRecTangle;
	char cPos;
public:
	Circle getCircle();
	RecTangle getRecTangle();
	void setCircle(Circle xCircle);
	void setRecTangle(RecTangle xRecTangle);
	char getPos();
	void setPos(char cPos);
	void print();
	string toString();
	double getArea();
	string toStringPos();
	static int numOfShapes;
	MyShape(void) : Circle(), RecTangle()
	{
		this->cPos = ' ';
		this->numOfShapes++;
	}
	MyShape(char cPos, string sColorC, int nRa, string sColorR, int nLength, int nWidth) : Circle(sColorC, nRa), RecTangle(sColorR, nLength, nWidth)
	{
		this->cPos = cPos;
		this->numOfShapes++;
		xCircle = Circle(sColorC, nRa);
		xRecTangle = RecTangle(sColorR, nLength, nWidth);
	}
	virtual ~MyShape(void){};
};

