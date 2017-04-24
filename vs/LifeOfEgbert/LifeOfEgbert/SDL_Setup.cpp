/**
	Life of Egbert, SDL_Setup.cpp
	For all your SDL and window setup needs

	(c) 2017 BogoCode
	@author Harrison Tran and the BogoCode Team
*/

#include "stdafx.h"
#include "SDL_Setup.h"

/**
	Start up the variables needed to operate the window

	@param quit A boolean indicating the exit status of the game.
	False if the game is running, True at window close.
*/
CSDL_Setup::CSDL_Setup(bool* quit, int screen_width, int screen_height) {
	window = NULL; // Create null window pointer
	/*	SDL_WINDOW_FULLSCREEN, SDL_WINDOW_BORDERLESS -- possible flags you might also want
		SDL_WINDOWPOS_CENTERED on the x and y arguments to center the window; else use pixel integer
		For resizeable windows, OR ( | ) a SDL_WINDOW_RESIZEABLE flag
	*/
	window = SDL_CreateWindow("Life of Egbert", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
		screen_width, screen_height, SDL_WINDOW_SHOWN);
	// If the window fails, close the program
	if (window == NULL) {
		std::cout << "Window could not be created!" << std::endl;
		*quit = true;
		//return 0;
	}
	// Set up SDL Rendering
	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); // Woo hardware acceleration!
	updateEvent = new SDL_Event(); // Maintain persistence
}
/**
	Destroy SDL related variables
*/
CSDL_Setup::~CSDL_Setup() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete updateEvent;
}
/**
	Return the SDL renderer

	@return the SDL renderer
*/
SDL_Renderer* CSDL_Setup::getRenderer() {
	return renderer;
}
/**
	Return the update event used to keep the window up

	@return the update event
*/
SDL_Event* CSDL_Setup::getUpdateEvent() {
	return updateEvent;
}
/**
	Allow the window to be updated (please succeed with End())
*/
void CSDL_Setup::Begin() {
	SDL_PollEvent(updateEvent); // Get the status of user action
	SDL_RenderClear(renderer); // Clear the render
}
/**
	Update the game window (please precede with Begin())
*/
void CSDL_Setup::End() {
	SDL_RenderPresent(renderer); // Update the screen
}