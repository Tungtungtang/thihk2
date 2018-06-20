#include "SalesEmployee.h"

double SalesEmployee::getMony()
{
	if(this->Sales < 5)
		this->Commission -= 0.01 * this->Sales;
	if(this->Sales >= 5 && this->Sales <=7)
		this->Commission += 0.01 * this->Sales;
	if(this->Sales >= 7)
		this->Commission += 0.02 * this->Sales;
	return this->Salary + this->Commission;
}
