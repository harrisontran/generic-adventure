#pragma once
class CSDL_Setup {
public:
	CSDL_Setup(bool* quit, int screen_width, int screen_height);
	~CSDL_Setup();
	SDL_Renderer* getRenderer();
	SDL_Event* getUpdateEvent();
	void Begin();
	void End();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* updateEvent;
};

