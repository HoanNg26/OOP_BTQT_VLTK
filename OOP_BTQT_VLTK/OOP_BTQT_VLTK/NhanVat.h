#pragma once
#include "DoiTuong.h"
#include "MonPhai.h"
class NhanVat: public DoiTuong
{
private:
	MonPhai *mp;
public:
	NhanVat();
	NhanVat(MonPhai *mp);
	~NhanVat();

public:
	He *getHe();
	void danh(DoiTuong *dt);
	void capNhatCapDo();
};

