
#pragma once
#include "../common.h"
#include <map>


enum SpriteID {
  Player,
  Enemy,

  Floor,
  Pipe,

  All_Sprite,
};


class cResource {
public:

  static cResource getInstance();

  Texture getSprite(const SpriteID);
  void removeSprite(const SpriteID);

private:

  cResource();

  std::map<SpriteID, Texture> m_sprite;
};
