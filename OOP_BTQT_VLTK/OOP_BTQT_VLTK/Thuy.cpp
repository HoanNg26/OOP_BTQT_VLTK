#include "stdafx.h"
#include "Thuy.h"


Thuy::Thuy()
{
	this->index = 1;
}


Thuy::~Thuy()
{
}

He * Thuy::createCopy()
{
	return new Thuy();
}
