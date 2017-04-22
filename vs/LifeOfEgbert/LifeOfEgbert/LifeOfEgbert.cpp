/**
* LifeOfEgbert.cpp -- The Game of the Century
* (c) 2017 BogoCode
* Console entry point
**/
#include "stdafx.h" // Dump of our includes
#include "Main.h"	// Main.h
int main(int argc, char *argv[]) {
	CMain* cmain = new CMain();
	cmain->GamePersistence();

	return 0;
}

