#pragma once
#include <iostream>
using namespace std;
#include <string>
class HBH
{
protected:
	string sColor;
	int nDai;
	int nRong;
	int nGoc;
public:
	int getDai();
	int getRong();
	int getGoc();
	void setDai(int nDai);
	void setRong(int nRong);
	void setGoc(int nGoc);
	string toString(string sColor);
	int tinhS;
	int tinhC;
	HBH()
	{
		this->nDai = 1;
		this->nRong = 1;
		this->nGoc = 0;
		this->sColor = sColor;
	}
	HBH(string sColor, int nDai, int nRong, int nGoc)
	{
		this->sColor = sColor;
		this->nDai = nDai;
		this->nGoc = nGoc;
		this->nRong = nRong;
	}
	virtual ~HBH(void);
};

