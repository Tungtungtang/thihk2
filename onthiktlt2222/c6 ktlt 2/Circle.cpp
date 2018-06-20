#include "Circle.h"


int Circle::getRadius()
{
	return this->nRa;
}
void Circle::setRadius(int nRa)
{
	this->nRa = nRa;
}
string Circle::toString()
{
	string s;
	s = "This is Circle.";
	return s;
}
void Circle::print()
{
	cout << this->toString() << " " << this->getColor();
}
double Circle::getArea()
{
	return this->nRa * 3.14;
}
