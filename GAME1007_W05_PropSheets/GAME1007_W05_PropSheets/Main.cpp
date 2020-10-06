#include <iostream>
#include <sdl.h>
using namespace std;

int main(int argc, char* argv[])
{
	SDL_Window* p_window;
	SDL_Renderer* p_renderer;

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		cout << "SDL initialized!" << endl;
	}
	else
	{
		cout << "Problem initializing SDL... aborting!" << endl;
		return 1;
	}
	p_window = SDL_CreateWindow("GAME1007 SDL Intro", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		1024, 1024, NULL);
	if (p_window == nullptr)
	{
		cout << "Problem initializing window... aborting!" << endl;
		return 2;
	}
	else
	{
		p_renderer = SDL_CreateRenderer(p_window, -1, SDL_RENDERER_ACCELERATED);
	}
	SDL_SetRenderDrawColor(p_renderer, 0, 64, 255, 255); // 0-255 for each color channel
	SDL_RenderClear(p_renderer); // 'paints over' window with draw color
	SDL_RenderPresent(p_renderer); // Refreshes window
	system("pause"); // Just to pause before quit.
	SDL_DestroyRenderer(p_renderer);
	SDL_DestroyWindow(p_window);
	SDL_Quit();
	return 0;
}