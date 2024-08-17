#include "../include/menu.h"

void Menu::Init() {

  boldFont = LoadFontEx("./resources/font/Kaph.ttf", 42, NULL, 0);
  textFont = LoadFontEx("./resources/font/m6x11.ttf", 25, NULL, 0);

}

void Menu::Draw() {

  DrawTextEx(boldFont, "CHICK PEA's DATE", Vector2{BLOCK-50, BLOCK}, boldFont.baseSize, 4, TEXT);

  DrawTextEx(textFont, "(Press Space to start)", Vector2{BLOCK*2-52, BLOCK*4}, textFont.baseSize, 4, TEXT);

}

bool Menu::Change() {

  if (IsKeyPressed(KEY_SPACE)) {
    return true;
  }

  return false;

}
