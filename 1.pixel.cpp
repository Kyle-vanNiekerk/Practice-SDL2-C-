#include <SDL2/SDL.h>

int main(){
	// Initialise Window and Renderer
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	
	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(640*1.5, 480*1.5, 0, &window, &renderer);
	SDL_RenderSetScale(renderer,4,4);

	// Draw black screen
	SDL_SetRenderDrawColor(renderer, 0,0,0,255);
	SDL_RenderClear(renderer);

	// Render Single White Pixel
	SDL_SetRenderDrawColor(renderer,255,255,255,255);
	SDL_RenderDrawPoint(renderer, 640/2, 480/2);

	SDL_RenderPresent(renderer);

	SDL_Delay(10000);

	return 0;
}