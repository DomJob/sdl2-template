#pragma once
#include <SDL2/SDL.h>

class RenderWindow 
{
public:
	RenderWindow(const char* p_title, int p_w, int p_h);
	void cleanUp();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};