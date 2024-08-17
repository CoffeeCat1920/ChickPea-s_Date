#ifndef KEYS_H
#define KEYS_H

#include "./setting.h"
#include "./raylib.h"

class Keys {

private:

  Rectangle rec;

  Rectangle goodBoundry;

  KeyboardKey key;

  int speed;
  float points;

  bool destory;

  void SetKey( KeyboardKey key );

public:

  Keys (Vector2 position, int speed) {
    
    this->rec = Rectangle {  position.x + 25, position.y + 12, (float)BLOCK - 15, (float)BLOCK - 15 };

    this->goodBoundry = Rectangle { BLOCK * 3.5, BLOCK * 7, BLOCK, BLOCK };

    this->speed = speed;

    this->destory = false;

  }

  void Draw();
  float GetScore();

};

#endif // !KEYS_H
