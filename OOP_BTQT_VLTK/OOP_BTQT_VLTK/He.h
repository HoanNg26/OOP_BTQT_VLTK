#pragma once
class He
{
public:
	// = 0: not set, 's'. tuong sinh, 'k'. tuong khac
	static int tbl[5][5]; 
protected:
	int index; //0. kim, 1. thuy, 2. moc, ,3. Hoa, 4. Tho
public:
	He();
	virtual ~He();

public:
	int getIndex();
	int laTuongSinh(He *h);
	int laTuongKhac(He *h);
public:
	virtual He * createCopy();
};

