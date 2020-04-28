#if !defined(MODULARIZARIZATION_GAME_H)
#define MODULARIZARIZATION_GAME_H

class Game {
  //******************************************
  //* Member Variables
  //******************************************
 private:
  bool mGameRunning;

  //******************************************
  //* Constructors and Destructors
  //******************************************
 public:
  Game() = default;   // default constructor
  ~Game() = default;  // default destructor

  //******************************************
  //* Getters and Setters
  //******************************************
  bool running() { return mGameRunning; }

  //******************************************
  //* Member Methods
  //******************************************
  // move core functions defined in 02_bare_bones here
  void init() { mGameRunning = true; }

  void handleEvents() {}

  void update() {}

  void render() {}

  void clean() {}
};

#endif  // MODULARIZARIZATION_GAME_H
