#pragma once
#include "RecTangle.h"
#include "Date.h"
class Box :
	public RecTangle
{
	int nHeight;
	Date createDate;
public:
	int getVolunm();
	Box(void) : RecTangle()
	{
		this->nHeight = 1;
	}
	Box(string sColor, int nLength, int nWidth, int nHeight, int nDay, int nMonth, int nYear) : RecTangle(sColor,nLength, nWidth) 
	{
		this->nHeight = nHeight;
	}
	virtual ~Box(void){};
};

