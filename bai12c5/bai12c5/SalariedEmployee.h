#pragma once
#include "employee.h"
#include <string>
class SalariedEmployee :
	public Employee
{
protected:
	double Salary;
public:
	double getMony();
	friend ostream& operator << (ostream& os, const SalariedEmployee SL)
	{
		cout << "xuat name: ";
		os << SL.sName;
		cout << "xuat salary: ";
		os << SL.Salary;
		return os;
	}
	SalariedEmployee(string sName,double salary) : Employee(sName)
	{
		this->Salary = salary;
	}
	SalariedEmployee(void) : Employee()
	{
		this->Salary = 0.0;
	}
	~SalariedEmployee(void);
};

