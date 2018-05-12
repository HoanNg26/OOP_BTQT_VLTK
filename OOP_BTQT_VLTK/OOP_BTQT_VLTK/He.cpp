#include "stdafx.h"
#include "He.h"

int He::tbl[5][5] = {
	{ 0, 's', 'k', 0, 0 },
	{ 0, 0, 's', 'k', 0 },
	{ 0, 0, 0, 's', 'k' },
	{ 'k', 0, 0, 0, 's' },
	{ 's', 'k', 0, 0, 0 },
};

He::He()
{
	this->index = -1;
}


He::~He()
{
}

int He::getIndex()
{
	return this->index;
}

int He::laTuongSinh(He * h)
{
	if (h == NULL)
		return 0;
	if (He::tbl[this->index][h->getIndex()] == 's')
		return 1;
	return 0;
}

int He::laTuongKhac(He * h)
{
	if (h == NULL)
		return 0;
	if (He::tbl[this->index][h->getIndex()] == 'k')
		return 1;
	return 0;
}

He * He::createCopy()
{
	return NULL;
}
