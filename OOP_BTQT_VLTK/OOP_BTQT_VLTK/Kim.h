#pragma once
#include "He.h"
class Kim: public He
{
public:
	Kim();
	~Kim();
public:
	virtual He * createCopy();
};

