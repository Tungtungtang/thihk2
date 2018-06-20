#pragma once
#include "hbh.h"
class H_THOI : virtual public HBH
{
public:
	H_THOI() : HBH(nDai,nGoc,sColor)
	{

	}
	H_THOI(string sColor,int nDai, int nGoc) : HBH(sColor, nDai,nDai, nGoc)
	{
		this->nDai = nDai;
		this->nGoc = nGoc;
		this->sColor = sColor;
	}
	virtual ~H_THOI(void);
};

