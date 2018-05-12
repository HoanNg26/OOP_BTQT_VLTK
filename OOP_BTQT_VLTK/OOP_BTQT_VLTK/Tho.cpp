#include "stdafx.h"
#include "Tho.h"


Tho::Tho()
{
	this->index = 4;
}


Tho::~Tho()
{
}

He * Tho::createCopy()
{
	return new Tho();
}
