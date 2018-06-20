#pragma once
#include "salariedemployee.h"
#include <string>
class SalesEmployee :
	public SalariedEmployee
{
private:
	double Commission;
	double Sales;
public:
	double getMony();
	friend ostream& operator << (ostream& os, const SalesEmployee SLes)
	{
		cout << "xuat name: ";
		os << SLes.sName;
		cout << "\nxuat salary:";
		os << SLes.Salary;
		cout << "xuat commission: ";
		os << SLes.Commission;
		cout << "xuat sales: ";
		os << SLes.Sales;
		return os;
	}
	SalesEmployee(string sName, double salary,double Commission, double Sales) :  SalariedEmployee(sName, Salary)
	{
		this->Sales = Sales;
		this->Commission = Commission;
	}
	SalesEmployee(void) 
	{
		this->Sales = 0.0;
		this->Commission = 0.0;
	}
	~SalesEmployee(void);
};

