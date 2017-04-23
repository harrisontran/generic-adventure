/**
	Life of Egbert, Sprite.cpp
	For all your sprite management needs
	
	Console entry point
	(c) 2017 BogoCode

	@author Harrison Tran and the BogoCode Team
	@version Unreleased
*/
#include "stdafx.h"
#include "Sprite.h"

CSprite::CSprite(SDL_Renderer* p_renderer, std::string file_path, int x, int y, int w, int h) {
	renderer = p_renderer;
	texture = NULL;
	texture = IMG_LoadTexture(renderer, file_path.c_str());
	if (texture == NULL) { std::cout << "Couldn't load " << file_path.c_str() << std::endl; }
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
}
CSprite::~CSprite() {
	SDL_DestroyTexture(texture);
}
void CSprite::Draw() {
	SDL_RenderCopy(renderer, texture, NULL, &rect);
}