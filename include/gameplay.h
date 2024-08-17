#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include "./grid.h"
#include "raylib.h"
#include "setting.h"

#include <iostream>

class GamePlay {

private:

  Grid grid; 
  int point;

  Image background;
  Texture2D texture;


public:

  GamePlay() {
    this->point = 0;
  }

  void Draw(); 
  void Init(); 

};

#endif // !GAMEPLAY_H
