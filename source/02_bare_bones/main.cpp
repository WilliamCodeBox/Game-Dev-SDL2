#include <SDL.h>

// initialize SDL and create window
void init() {}

// core loop functions
void handelEvents() {}
void update() {}
void render() {
  // nothing but for code running
  gameRunning = false;
}

// clean up program
void clean() {}

// Flag for the while loop
bool gameRunning = true;

int main(int argc, char const *argv[]) {
  init();

  while (gameRunning) {
    handelEvents();
    update();
    render();
  }

  clean();

  return 0;
}
