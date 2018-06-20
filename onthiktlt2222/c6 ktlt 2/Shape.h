#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	string sColor;
public:
	virtual void print() = 0;
	virtual double getArea() = 0;
	string getColor();
	void setColor(string sColor);
	virtual string toString() = 0;
	Shape(string sColor)
	{
		this->sColor = sColor;
	}
	Shape(void)
	{
		this->sColor = "red";
	}
	virtual ~Shape(void){};
};

