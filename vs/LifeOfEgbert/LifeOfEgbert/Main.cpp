#include "stdafx.h"
#include "Main.h"

CMain::CMain(int width, int height) {
	screen_width = width;
	screen_height = height;
	quit = false;  // Game begins in operation
	csdl_setup = new CSDL_Setup(&quit, screen_width, screen_height); // Instantitate SDL stuff
	grass = new CSprite(csdl_setup->getRenderer(),"res/grass.bmp",0,0,800,600);
	user_sprite = new CSprite(csdl_setup->getRenderer(), "res/usertest.bmp", 400, 300, 50, 50);
}
CMain::~CMain() {
	delete csdl_setup;
	delete grass;
	delete user_sprite;
}
void CMain::GamePersistence() {
	// While the window is open, keep the renderer updated (so as to keep the window open)
	// Also allow for user to exit 
	while (!quit && csdl_setup->getUpdateEvent()->type != SDL_QUIT) {
		csdl_setup->Begin();
		/* vvv DRAWING SPACE vvv */
		// Order matters. First items are in the back. Last items are at front.
		grass->Draw();
		user_sprite->Draw();
		/* ^^^ DRAWING SPACE ^^^ */
		csdl_setup->End();
	}
}
