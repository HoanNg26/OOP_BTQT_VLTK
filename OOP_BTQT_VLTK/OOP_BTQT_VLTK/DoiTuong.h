#pragma once
#include "He.h"
class DoiTuong
{
protected:
	float capdo;
	float mucsatthuong;
public:
	DoiTuong();
		DoiTuong(float capdo, float mucsatthuong);
	virtual ~DoiTuong();

public:
	virtual He * getHe();
	virtual void danh(DoiTuong * t);
	virtual void capNhatCapDo();
	void satThuong(float kPercent);

public:
	void writeline();
};

