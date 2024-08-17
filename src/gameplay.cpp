#include "../include/gameplay.h"
#include "../include/raylib.h"

void GamePlay::Init() {

  this->background = LoadImage( "./resources/Land/Land.png" );

  this->texture = LoadTextureFromImage(this->background);

  return;

}

void GamePlay::Draw() {

  DrawTexture(texture, 0, 0, WHITE);  

  grid.Draw();

  return;

}

