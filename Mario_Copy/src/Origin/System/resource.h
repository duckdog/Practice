
#pragma once
#include "../common.h"
#include <map>


enum SpriteID {
  Player1,
  Player2,

  ShellCreepert,
  SideStepper,
  FighterFly,

  Floor,
  Pipe,

  All_Sprite,
};


class cResource {
public:

  static cResource* get();

  Texture* Sprite(const SpriteID);
  void removeSprite(const SpriteID);

private:

  cResource();

  void spriteInit();

  std::map<SpriteID, Texture> m_sprite;
};
