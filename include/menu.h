#ifndef MAINMENU_H
#define MAINMENU_H

#include "./raylib.h"
#include "./setting.h"

#include <string>

class Menu {

private:

  const char *start = "Start";

  Font boldFont;
  Font textFont;

public:

  Menu() {

  }

  ~Menu() {
    //UnloadFont(boldFont);
    //UnloadFont(textFont);
  }

  void Init();
  void Draw(); 
  bool Change();

};

#endif // !MAINMENU_H
