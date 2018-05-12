#include "stdafx.h"
#include "Kim.h"


Kim::Kim()
{
	this->index = 0;
}


Kim::~Kim()
{
}

He * Kim::createCopy()
{
	return new Kim();
}

