#include "stdafx.h"
#include "DoiTuong.h"


DoiTuong::DoiTuong()
{
	this->capdo = 1;
	this->mucsatthuong = 1;
}

DoiTuong::DoiTuong(float capdo, float mucsatthuong)
{
	this->capdo = capdo;
	this->mucsatthuong = mucsatthuong;
}


DoiTuong::~DoiTuong()
{
}

He * DoiTuong::getHe()
{
	return NULL;
}

void DoiTuong::danh(DoiTuong * t)
{
	return;
}

void DoiTuong::capNhatCapDo()
{
	return;
}

void DoiTuong::satThuong(float kPercent)
{
	this->mucsatthuong = this->mucsatthuong * (1 + kPercent);
}

void DoiTuong::writeline()
{
	printf("capdo:%f\n", capdo);
	printf("mucsatthuong:%f\n", mucsatthuong);
}
