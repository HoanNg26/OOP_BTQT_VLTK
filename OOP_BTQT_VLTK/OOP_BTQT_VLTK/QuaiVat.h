#pragma once
#include "DoiTuong.h"
#include "He.h"
class QuaiVat :
	public DoiTuong
{
protected:
	He *he;
public:
	virtual He *getHe();
	virtual void capNHatCapDo();
	virtual void danh(DoiTuong *dt);
public:
	QuaiVat(He *he);
	virtual ~QuaiVat();
};

