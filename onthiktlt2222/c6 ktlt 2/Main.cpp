#include "MyShape.h"
#include "Box.h"
int MyShape::numOfShapes = 0;
void main()
{
	////test Rectangle:
	//RecTangle R("Blue", 5, 7);
	//R.print();
	//cout << "CV = " << R.getArea() << endl;

	////Test Circle:
	//Circle C("Yellow", 5);
	//C.print();
	//cout << "CV = " << C.getArea() << endl;

	////Test MyShape:
	//MyShape MS('B', "Green", 5, "Pink", 7, 9);
	//MS.print();
	//MyShape MS2('R', "Black", 7, "Yellow", 10, 11);
	//MS2.print();
	//cout << "So luong MyShape tao ra la : " << MyShape::numOfShapes << endl;
	Box b("Green", 3,5,5, 20, 15, 2018);
	cout << "V = " << b.getVolunm() << endl;
	system("pause");
}