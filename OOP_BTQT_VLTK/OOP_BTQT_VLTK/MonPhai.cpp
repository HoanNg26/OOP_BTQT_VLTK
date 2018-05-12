#include "stdafx.h"
#include "MonPhai.h"
#include <string.h>

MonPhai::MonPhai()
{
	this->he = NULL;
	this->ten = NULL;
}

MonPhai::MonPhai(char * ten)
{
	this->he = NULL;
	this->ten = NULL;
	if (ten != NULL) {
		int len = strlen(ten);
		if (len > 0) {
			char  * t = new char[len + 1];
			memcpy(t, ten, len + 1);
		}
	}
}

MonPhai::MonPhai(He * he)
{
	this->he = NULL;
	if(he!= NULL)
		this->he = he->createCopy();
}

MonPhai::MonPhai(char * ten, He * he)
{
	this->he = NULL;
	this->ten = NULL;
	if (ten != NULL) {
		int len = strlen(ten);
		if (len > 0) {
			char  * t = new char[len + 1];
			memcpy(t, ten, len + 1);
			this->ten = t;
		}
	}
	if (he != NULL)
		this->he = he->createCopy();
}


MonPhai::~MonPhai()
{
	if (this->he != NULL)
		delete this->he;
	this->he = NULL;
	if (this->ten != NULL)
		delete this->ten;
	this->ten = NULL;
}

He * MonPhai::getHe()
{
	return this->he;
}

MonPhai * MonPhai::createCopy()
{
	return new MonPhai(this->ten, this->he);
}
