#include "stdafx.h"
#include "Main.h"

CMain::CMain() {
	quit = false;  // Game begins in operation
	csdl_setup = new CSDL_Setup(&quit); // Instantitate SDL stuff

	grass_texture = NULL;
	grass_texture = IMG_LoadTexture(csdl_setup->getRenderer(), "res/grass.bmp");
	if (grass_texture == NULL) { std::cout << "Couldn't load grass_texture!!!"; }
	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.w = 800;
	grass_rect.h = 600;

	user_texture = NULL;
	user_texture = IMG_LoadTexture(csdl_setup->getRenderer(), "res/usertest.bmp");
	if (user_texture == NULL) { std::cout << "Couldn't load user_texture!!!"; }
	user_rect.x = 400;
	user_rect.y = 300;
	user_rect.w = 50;
	user_rect.h = 50;
}
CMain::~CMain() {
	/* POST-CLOSE MEMORY CLEANUP AREA */
	// Clean up after window close to prevent possible memory leak
	SDL_DestroyTexture(grass_texture);
	SDL_DestroyTexture(user_texture);
}
void CMain::GamePersistence() {
	// While the window is open, keep the renderer updated (so as to keep the window open)
	// Also allow for user to exit 
	while (!quit && csdl_setup->getUpdateEvent()->type != SDL_QUIT) {
		csdl_setup->Begin();
		/* vvv DRAWING SPACE vvv */
		// Order matters. First items are in the back. Last items are at front.
		SDL_RenderCopy(csdl_setup->getRenderer(), grass_texture, NULL, &grass_rect);
		SDL_RenderCopy(csdl_setup->getRenderer(), user_texture, NULL, &user_rect);
		/* ^^^ DRAWING SPACE ^^^ */
		csdl_setup->End();
	}
}
