// OOP_BTQT_VLTK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>

#include "DoiTuong.h"
#include "He.h"
#include "Hoa.h"
#include "Kim.h"
#include "Moc.h"
#include "MonPhai.h"
#include "NhanVat.h"
#include "QuaiVat.h"
#include "QVDauLinh.h"
#include "QVThongThuong.h"
#include "Thuy.h"
#include "Tho.h"

int main()
{
	He * kim = new Kim();
	He * thuy = new Thuy();
	He * moc = new Moc();
	He * hoa = new Hoa();
	He * tho = new Tho();

	MonPhai * vodang = new MonPhai("Vo Dang", kim);
	MonPhai * thieulam = new MonPhai("Thieu lam", hoa);

	DoiTuong ** list = new DoiTuong *[5];
	list[0] = new NhanVat(vodang);
	list[1] = new QVThongThuong(thuy);
	list[2] = new NhanVat(thieulam);
	list[3] = new QVThongThuong(moc);
	list[4] = new QVDauLinh(tho);

	//test danh ()

	list[0]->danh(list[1]);
	list[0]->writeline();
	list[1]->writeline();

	getchar();
	return 0;
}
