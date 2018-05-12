#include "stdafx.h"
#include "QVDauLinh.h"


void QVDauLinh::capNhatCapDo()
{
	this->capdo = this->mucsatthuong * 7;
}

QVDauLinh::QVDauLinh(He *he):QuaiVat(he)
{
	this->capdo = 3;
	this->mucsatthuong = 3;
}


QVDauLinh::~QVDauLinh()
{
}
