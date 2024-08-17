#include "../include/grid.h"

void Grid::UpdateScore( float score ) {

  this->score += score;
  

}

void Grid::Draw() {

  DrawRectangleRec(rec, LIGHT_PURPLE);
  DrawRectangleRec(goodBoundry, GOOD_BOUNDRY_COLOR);

  key.Draw();

  this->UpdateScore( key.GetScore() );


}

