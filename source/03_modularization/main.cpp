#include "game.hpp"

int main(int argc, char const *argv[]) {
  Game game;

  game.init();

  while (game.running()) {
    game.handleEvents();
    game.update();
    game.render();
  }

  game.clean();
  return 0;
}
