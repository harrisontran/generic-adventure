/**
	Life of Egbert, LifeOfEgbert.cpp
	Class: LASA HS Advanced Computer Science 2016-17 
	It's an RPG that uses natural language processing.

	Console entry point
	(c) 2017 BogoCode

	@author Harrison Tran and the BogoCode Team
	@version Unreleased
*/
#include "stdafx.h" // Dump of our includes
#include "Main.h"	// Main.h
/**
	Gets everything going. B-)

	@param argc the number of arguments passed to main()
	@param *argv[] the array of arguments passed to main()
	@return 0, which ends the program
*/
int main(int argc, char *argv[]) {
	// Just in case we need the screen size for anything
	SDL_DisplayMode DM;
	SDL_GetCurrentDisplayMode(0, &DM);

	CMain* cmain = new CMain(800, 600); // Fire up the main class
	cmain->GamePersistence();			// Keep the game going
	delete cmain;						// Free up memory
	return 0;	// Ends the program. That's after persistence runs dry.
}

