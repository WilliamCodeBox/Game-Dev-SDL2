#include "game.hpp"

int main(int argc, char const *argv[]) {
    Game game;

    game.init("Modularization", 100, 100, 640, 480, 0);

    while (game.running()) {
        game.handleEvents();
        game.update();
        game.render();
    }

    game.clean();
    return 0;
}
