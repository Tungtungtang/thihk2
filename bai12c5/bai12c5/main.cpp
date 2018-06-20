#include "SalesEmployee.h"
#include "WagedEmployee.h"

void main()
{
	WagedEmployee WE("Yasuo", 69,2000);
	cout << WE;
	cout << "Luong: " << WE.getMoney() << endl;
	system("pause");
}