#ifndef GRID_H
#define GRID_H

#include "./key.h"
#include "./raylib.h"
#include "./setting.h"

class Grid {

private:

  Keys key;

  Rectangle rec;
  Rectangle goodBoundry;

  int score;


public:

  Grid() : key( Vector2{BLOCK*6, BLOCK*7}, 3 ), rec( Rectangle { BLOCK * 0, BLOCK * 7, BLOCK * 8, BLOCK } ) {

    this->goodBoundry = Rectangle { BLOCK * 3.5, BLOCK * 7, BLOCK, BLOCK };

    this->score = 0;

  }

  void Draw();
  void UpdateScore( float distance );

};

#endif // !GRID_H
