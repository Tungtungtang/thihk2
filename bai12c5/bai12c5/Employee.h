#pragma once
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
class Employee
{
protected:
	string sName;
public:
	virtual double getMoney() = 0;
	friend ostream& operator << (ostream& os, const Employee E)
	{
		os << E.sName;
		return os;
	}
	Employee(string sName)
	{
		this->sName = sName;
	}
	Employee(void)
	{
		this->sName = " ";
	}
	~Employee(void){};
};

