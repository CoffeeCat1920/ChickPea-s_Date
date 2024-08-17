#include "../include/key.h"
#include "../include/raylib.h"

void Keys::Draw() {

  if ( !destory && !(rec.x <= -64) ) {

    rec.x -= speed;

    DrawRectangleRec(rec, KEYS);

    return;

  }


}

float Keys::GetScore() {

  if ( IsKeyPressed( KEY_SPACE ) ) {

    if ( !destory && CheckCollisionRecs(rec, goodBoundry) ) {

      this->destory = true;

      float distance = rec.x - goodBoundry.x;

      if ( distance == 0 ) return 2;
      else return 1;


    }

    this->destory = true;

    return -1;

  }

  return 0;

}

