#pragma once
#include "employee.h"
#include <string>
class WagedEmployee :
	public Employee
{
private:
	double hour, wage;
public:
	double getMoney();
	friend ostream& operator << (ostream& os, const WagedEmployee WE)
	{
		cout << "Name: ";
		os << WE.sName;
		cout << "\nhour: ";
		os << WE.hour;
		cout << "\nwage:";
		os << WE.wage;
		return os;
	}
	WagedEmployee(string sName, double hour, double wage) : Employee(sName)
	{
		this->hour = hour;
		this->wage = wage;
	}
	WagedEmployee(void) : Employee()
	{
		this->hour = 0.0;
		this->wage = 0.0;
	}
	~WagedEmployee(void){};
};

