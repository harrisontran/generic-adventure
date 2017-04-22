#pragma once
#include "SDL_Setup.h"

class CMain {
public:
	CMain();
	~CMain();
	void GamePersistence();
private:
	bool quit;

	SDL_Texture* grass_texture;
	SDL_Rect grass_rect;
	SDL_Texture* user_texture;
	SDL_Rect user_rect;

	CSDL_Setup* csdl_setup;
};

