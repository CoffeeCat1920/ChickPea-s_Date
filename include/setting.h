#ifndef SETTING_H
#define SETTING_H

#define BLOCK 64
#define BOARD 8

#define LIGHT_RED (Color) { 255, 114, 118, 255 }
#define DARK_BLUE (Color) {8, 11, 18, 255}
#define DARK_PURPLE (Color) {38, 33, 62, 255}
#define P_PURPLE (Color) {99, 92, 132, 255}
#define OFF_WHITE (Color) {248, 245, 255, 255}
#define LIGHT_PURPLE (Color) {173, 173, 173, 255}
#define LIGHT_GREEN (Color) {56, 93, 46, 255}
#define LIGHTER_GREEN (Color) {65, 95, 65, 255}

#define BACKGROUND (Color) DARK_PURPLE 
#define KEYS (Color) OFF_WHITE 
#define TEXT (Color) OFF_WHITE 

#define GOOD_BOUNDRY_COLOR (Color) DARK_PURPLE

enum GameState {
  MENU,
  GAMEPLAY
};

#endif // !SETTING_H
