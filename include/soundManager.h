#ifndef SOUND_MANAGER
#define SOUND_MANAGER

#include "raylib.h"

#include <iostream>

class SoundManager {

private:

  Music music;

public:

  SoundManager() {

    InitAudioDevice();
    //

  }

  ~SoundManager() {


    CloseAudioDevice();

  }

  void Init(); 
  void Draw();

};

#endif // !SOUND_MANAGER
