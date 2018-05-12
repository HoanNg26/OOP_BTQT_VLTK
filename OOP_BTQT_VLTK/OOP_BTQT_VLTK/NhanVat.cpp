#include "stdafx.h"
#include "NhanVat.h"


NhanVat::NhanVat()
{
	this->mp =  NULL;
}

NhanVat::NhanVat(MonPhai * mp)
{
	this->capdo = 1;
	this->mucsatthuong = 1;
	this->mp = NULL;
	if(mp != NULL)
		this->mp = mp->createCopy();
}


NhanVat::~NhanVat()
{
	if (this->mp != NULL)
		delete this->mp;
	this->mp = NULL;
}

He * NhanVat::getHe()
{
	if (this->mp == NULL)
		return  NULL;
	return this->mp->getHe();
}

void NhanVat::danh(DoiTuong * dt)
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

void NhanVat::capNhatCapDo()
{
	this->capdo = this->mucsatthuong * 5;
}
