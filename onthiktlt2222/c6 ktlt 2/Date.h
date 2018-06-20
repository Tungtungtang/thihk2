#pragma once
#include <iostream>
using namespace std;
class Date
{
	int nDay, nMonth, nYear;
public:
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int nDay);
	void setMonth(int nMonth);
	void setYear(int nYear);
	void printDate();
	Date(void)
	{
		this->nDay = 0;
		this->nMonth = 0;
		this->nYear = 0;
	}
	Date(int nDay, int nMonth, int nYear)
	{
		this->nDay = nDay;
		this->nMonth = nMonth;
		this->nYear = nYear;
	}
	virtual ~Date(void){};
};

