#include "stdafx.h"
#include "Moc.h"


Moc::Moc()
{
	this->index = 2;
}


Moc::~Moc()
{
}

He * Moc::createCopy()
{
	return new Moc();
}
