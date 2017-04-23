#pragma once
#include "SDL_Setup.h"
#include "Sprite.h"

class CMain {
public:
	CMain(int width, int height);
	~CMain();
	void GamePersistence();
private:
	bool quit;
	int screen_width;
	int screen_height;
	CSDL_Setup* csdl_setup;
	CSprite* grass;
	CSprite* user_sprite;
};

