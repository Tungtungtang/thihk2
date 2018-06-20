#include "Date.h"

void Date::printDate()
{
	cout << this->nDay << "/" << this->nMonth << "/" << this->nYear << endl;
}
int Date::getDay()
{
	return this->nDay;
}
int Date::getMonth()
{
	return this->nMonth;
}
int Date::getYear()
{
	return this->nYear;
}
void Date::setDay(int nDay)
{
	this->nDay = nDay;
}
void Date::setMonth(int nMonth)
{
	this->nMonth = nMonth;
}
void Date::setYear(int nYear)
{
	this->nYear = nYear;
}
