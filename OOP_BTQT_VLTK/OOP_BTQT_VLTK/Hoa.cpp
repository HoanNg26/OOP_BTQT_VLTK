#include "stdafx.h"
#include "Hoa.h"


Hoa::Hoa()
{
	this->index = 3;
}


Hoa::~Hoa()
{
}

He * Hoa::createCopy()
{
	return new Hoa();
}
