#include <iostream>

#include "game.hpp"

void Game::clean() {
    std::cout << "Cleaning game...\n";
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
    std::cout << "Cleaning game successfully!\n";
}

bool Game::init(const std::string title, int xpos, int ypos, int width,
                int height, int flags) {
    std::cout << ">>> SDL Initialization...\n";
    // initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL inits successfully!" << std::endl;

        // init window
        m_pWindow =
            SDL_CreateWindow(title.c_str(), xpos, ypos, width, height, flags);

        if (m_pWindow != nullptr) {
            std::cout << "SDL window creation successfully!\n";
            m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);

            if (m_pRenderer != nullptr) {
                std::cout << "SDL renderer creation successfully!\n";
                SDL_SetRenderDrawColor(m_pRenderer, 255, 255, 255, 255);
            } else {
                std::cout << "Failed to initialize SDL renderer!\n";
                return false;
            }
        } else {
            std::cout << "Failed to create SDL window!\n";
            return false;
        }
    } else {
        std::cout << "Failed to initialize SDL!\n";
        return false;
    }

    std::cout << ">>> SDL initialization successfully!\n";
    m_gameRunning = true;
    return true;
}

void Game::render() {
    // clear the renderer, get ready to draw something
    SDL_RenderClear(m_pRenderer);
    // draw to the screen
    SDL_RenderPresent(m_pRenderer);

    // do nothing but delay 5000ms for demo
    SDL_Delay(5000);
    this->m_gameRunning = false;
}
