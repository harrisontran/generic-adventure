/**
* LifeOfEgbert.cpp -- The Game of the Century
* (c) 2017 BogoCode
* Console entry point
**/
#include "stdafx.h" // Dump of our includes
/**
*	Everything will happen here eventually.
**/
int main(int arc, char *argv[]) {
	bool quit = false; // Boolean that we can use to check the status of our window
	/* Window Creation and Game Instantiation */
	SDL_Init(SDL_INIT_VIDEO);	// Initiate SDL  (If everything, SDL_INIT_EVERYTHING, else SDL_INIT_VIDEO)
	SDL_Window * window = NULL;		// Create null window pointer

	// SDL_WINDOW_FULLSCREEN, SDL_WINDOW_BORDERLESS -- possible flags you might also want
	// SDL_WINDOWPOS_CENTERED on the x and y arguments to center the window; else use pixel integer
	// For resizeable windows, OR ( | ) a SDL_WINDOW_RESIZEABLE flag
	window = SDL_CreateWindow("Life of Egbert", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	// If the window fails, close the program
	if (window == NULL) { 
		std::cout << "Window could not be created!" << std::endl;
		return 0; 
	}  
	// Set up rendering stuff
	SDL_Renderer* renderer = NULL;
	renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	SDL_Event* updateEvent = new SDL_Event();
	// While the window is open, keep the renderer updated (so as to keep the window open)
	// Also allow for user to exit 
	while (!quit && updateEvent->type != SDL_QUIT) {
		SDL_PollEvent(updateEvent); // Get the status of user action
		SDL_RenderClear(renderer); // Clear the render
		SDL_RenderPresent(renderer); // Update the screen
	}
	// Clean up after window close to prevent possible memory leak
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete updateEvent;

    return 0;
}

