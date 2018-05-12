#include "stdafx.h"
#include "QuaiVat.h"


He * QuaiVat::getHe()
{
	return this->he;
}

void QuaiVat::capNHatCapDo()
{
	return;
}

void QuaiVat::danh(DoiTuong * dt)
{
	He * heNV = this->getHe();
	He * heDT = dt->getHe();

	if (heNV == NULL || heDT == NULL)
		return;

	if (heNV->laTuongSinh(heDT) == 1) {
		dt->satThuong(0.1f);
		dt->capNhatCapDo();
	}
	if (heNV->laTuongKhac(heDT) == 1) {
		dt->satThuong(0.2f);
		dt->capNhatCapDo();
	}
	if (heDT->laTuongKhac(heNV) == 1) {
		dt->satThuong(-0.2f);
		dt->capNhatCapDo();
	}
}

QuaiVat::QuaiVat(He *he)
{
	this->he = he;
}


QuaiVat::~QuaiVat()
{
	if (this->he != NULL)
		delete he;
	this->he = NULL;
}
