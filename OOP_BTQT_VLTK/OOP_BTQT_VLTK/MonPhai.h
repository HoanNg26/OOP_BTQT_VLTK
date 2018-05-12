#pragma once
#include "He.h"
class MonPhai
{
private:
	He *he;
	char *ten;
public:
	MonPhai();
	MonPhai(char *ten);
	MonPhai(He *he);
	MonPhai(char *ten, He *he);
	~MonPhai();

public:
	He * getHe();
	MonPhai * createCopy();
};

