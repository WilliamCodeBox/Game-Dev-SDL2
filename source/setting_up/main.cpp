#include <SDL.h>

#include <iostream>

const int WINDOW_WIDTH = 640;   // the width of window
const int WINDOW_HEIGHT = 480;  // the height of window

int main(int argc, char const *argv[]) {
  SDL_Window *window = nullptr;

  // Initialize SDL
  if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {
    // Create the window
    window = SDL_CreateWindow("Setting up SDL", SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH,
                              WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
  } else {
    std::cerr << "SDL can not create window! SDL_Error: " << SDL_GetError()
              << std::endl;
    return 1;
  }

  // Get
  auto windowSurface = SDL_GetWindowSurface(window);
  // Fill the surface white
  SDL_FillRect(windowSurface, nullptr,
               SDL_MapRGB(windowSurface->format, 0xFF, 0xFF, 0xFF));

  // Update the surface
  SDL_UpdateWindowSurface(window);

  SDL_Delay(5000);

  // Clean up SDL
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
