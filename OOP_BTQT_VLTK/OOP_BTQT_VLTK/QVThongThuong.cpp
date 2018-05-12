#include "stdafx.h"
#include "QVThongThuong.h"


void QVThongThuong::capNhatCapDo()
{
	this->capdo = this->mucsatthuong * 3;
}

QVThongThuong::QVThongThuong(He *he):QuaiVat(he)
{
	this->capdo = 2;
	this->mucsatthuong = 2;
}


QVThongThuong::~QVThongThuong()
{
}
