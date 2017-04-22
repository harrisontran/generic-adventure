#pragma once
class CMain {
public:
	CMain();
	~CMain();
	void GamePersistence();

private:
	bool quit;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* updateEvent;

	SDL_Texture* grass_texture;
	SDL_Rect grass_rect;

	SDL_Texture* user_texture;
	SDL_Rect user_rect;
};

