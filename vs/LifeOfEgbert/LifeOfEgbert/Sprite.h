#pragma once
class CSprite {
public:
	CSprite(SDL_Renderer* p_renderer, std::string file_path, int x, int y, int w, int h);
	~CSprite();
	void Draw();
private:
	SDL_Texture* texture;
	SDL_Rect rect;

	SDL_Renderer* renderer;
};

