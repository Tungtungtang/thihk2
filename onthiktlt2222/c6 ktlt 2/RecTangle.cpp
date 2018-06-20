#include "RecTangle.h"

int RecTangle::getLength()
{
	return this->nLength;
}
int RecTangle::getWidth()
{
	return this->nWidth;
}
void RecTangle::setLength(int nLength)
{
	this->nLength = nLength;
}
void RecTangle::setWidth(int nWidth)
{
	this->nWidth = nWidth;
}
void RecTangle::print()
{
	cout << this->toString() << " " << this->getColor();
}
string RecTangle::toString()
{
	string s;
	s = "This is RecTangle.";
	return s;
}
double RecTangle::getArea()
{
	return (this->getLength() + this->getWidth()) * 2;
}
