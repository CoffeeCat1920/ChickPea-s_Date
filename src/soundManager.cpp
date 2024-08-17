#include "../include/soundManager.h"


void SoundManager::Init() {

  InitAudioDevice();

  this->music = LoadMusicStream("../resources/audio/pew_pew.mp3");

  PlayMusicStream(music);

  std::cout << IsMusicReady(music) << std::endl;

}

void SoundManager::Draw() {

  UpdateMusicStream(music);

}
