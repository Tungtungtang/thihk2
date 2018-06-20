#include "MyShape.h"

Circle MyShape::getCircle()
{
	return this->xCircle;
}
RecTangle MyShape::getRecTangle()
{
	return this->xRecTangle;
}
void MyShape::setCircle(Circle xCircle)
{
	this->xCircle = xCircle;
}
void MyShape::setRecTangle(RecTangle xRecTangle)
{
	this->xRecTangle = xRecTangle;
}
char MyShape::getPos()
{
	return this->cPos;
}
void MyShape::setPos(char cPos)
{
	this->cPos = cPos;
}
void MyShape::print()
{
	cout << "The " << this->xCircle.getColor() << this->xCircle.toString() << "is on the " << this->toStringPos() << "side of the " << this->xRecTangle.getColor() << " " << this->xRecTangle.toString() << endl;
}
string MyShape::toString()
{
	string s = "MyShape";
	return s;
}
double MyShape::getArea()
{
	return 0;
}
string MyShape::toStringPos()
{
	string s = "";
	switch(this->cPos)
	{
	case 'R':
		s = "right";
		break;
	case 'L':
		s = "left";
		break;
	case 'A':
		s = "above";
		break;
	case 'B':
		s = "bottom";
		break;
	}
	return s;
}
