#include "stdafx.h"
#include "Main.h"

CMain::CMain() {
	quit = false;  // Game begins in operation
	window = NULL; // Create null window pointer
	// SDL_WINDOW_FULLSCREEN, SDL_WINDOW_BORDERLESS -- possible flags you might also want
	// SDL_WINDOWPOS_CENTERED on the x and y arguments to center the window; else use pixel integer
	// For resizeable windows, OR ( | ) a SDL_WINDOW_RESIZEABLE flag
	window = SDL_CreateWindow("Life of Egbert", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
	// If the window fails, close the program
	if (window == NULL) {
		std::cout << "Window could not be created!" << std::endl;
		quit = true;
		//return 0;
	}
	// Set up SDL Rendering
	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	updateEvent = new SDL_Event(); // Maintain persistence

	grass_texture = NULL;
	grass_texture = IMG_LoadTexture(renderer, "res/grass.bmp");
	if (grass_texture == NULL) { std::cout << "Couldn't load grass_texture!!!"; }
	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.w = 800;
	grass_rect.h = 600;

	user_texture = NULL;
	user_texture = IMG_LoadTexture(renderer, "res/usertest.bmp");
	if (user_texture == NULL) { std::cout << "Couldn't load user_texture!!!"; }
	user_rect.x = 400;
	user_rect.y = 300;
	user_rect.w = 50;
	user_rect.h = 50;
}
CMain::~CMain() {
	/* POST-CLOSE MEMORY CLEANUP AREA */
	// Clean up after window close to prevent possible memory leak
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyTexture(grass_texture);
	SDL_DestroyTexture(user_texture);
	delete updateEvent;
}
void CMain::GamePersistence() {
	// While the window is open, keep the renderer updated (so as to keep the window open)
	// Also allow for user to exit 
	while (!quit && updateEvent->type != SDL_QUIT) {
		SDL_PollEvent(updateEvent); // Get the status of user action
		SDL_RenderClear(renderer); // Clear the render
		/* vvv DRAWING SPACE vvv */
		// Order matters. First items are in the back. Last items are at front.
		SDL_RenderCopy(renderer, grass_texture, NULL, &grass_rect);
		SDL_RenderCopy(renderer, user_texture, NULL, &user_rect);
		/* ^^^ DRAWING SPACE ^^^ */
		SDL_RenderPresent(renderer); // Update the screen
	}
}
