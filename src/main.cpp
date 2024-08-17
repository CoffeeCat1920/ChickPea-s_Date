#include "../include/raylib.h"
#include "../include/menu.h"
#include "../include/gameplay.h"
#include "../include/setting.h"
#include "../include/soundManager.h"

class Game {

private:

  SoundManager soundManager;

  GameState gameState;
  GamePlay gamePlay;
  Menu menu;  
  
public:

  Game() : gameState(MENU) {}

  void Init() {

    menu.Init();
    gamePlay.Init();
    soundManager.Init();

  }

  void Draw() {

    switch (gameState) {
      case MENU:
        menu.Draw();
        soundManager.Draw();
        if (menu.Change()) gameState = GAMEPLAY;
      return;
      case GAMEPLAY:
        gamePlay.Draw();
      return;
    }

  }

};

int main (int argc, char *argv[]) {

  Game game;

  SetTargetFPS(60);

  InitWindow(BLOCK * BOARD, BLOCK * BOARD, "Chick Peas Date");

  game.Init();

  while (!WindowShouldClose()) {

    BeginDrawing();

    game.Draw();

    ClearBackground(BACKGROUND);

    EndDrawing();

  }

  CloseWindow();

  return 0;
}
