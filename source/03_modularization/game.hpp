#if !defined(MODULARIZARIZATION_GAME_H)
#define MODULARIZARIZATION_GAME_H

#include <SDL.h>

#include <string>

class Game {
    //******************************************
    //* Member Variables
    //******************************************
   private:
    bool m_gameRunning;
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;

    //******************************************
    //* Constructors and Destructors
    //******************************************
   public:
    Game() = default;   // default constructor
    ~Game() = default;  // default destructor

    //******************************************
    //* Getters and Setters
    //******************************************
    bool running() { return m_gameRunning; }

    //******************************************
    //* Member Methods
    //******************************************
    // move core functions defined in 02_bare_bones here
    bool init(const std::string title, int xpos, int ypos, int width,
              int height, int flags);

    void handleEvents() {}

    void update() {}

    void render();

    void clean();
};

#endif  // MODULARIZARIZATION_GAME_H
