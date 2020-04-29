#include "game.hpp"

int main(int argc, char const *argv[]) {
    auto game = new Game();

    game->init("Modularization", 100, 100, 640, 480, 0);

    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();
    delete game;
    return 0;
}
