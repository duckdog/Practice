
#include "resource.h"


cResource::cResource() {
  //spriteInit();
}


void cResource::spriteInit() {
  struct SpriteInfo {
    SpriteID id;
    std::string file_pass;
  };

  const SpriteInfo Table[] = {
    { Player1,       "res/png/.png" },
    { Player2,       "res/png/.png" },
    { ShellCreepert, "res/png/.png" },
    { SideStepper,   "res/png/.png" },
    { FighterFly,    "res/png/.png" },
    { Floor,         "res/png/.png" },
    { Pipe,          "res/png/.png" },
  };

  for (auto& it : Table) {
    m_sprite.insert(std::make_pair(it.id, Texture(it.file_pass)));
  }
}


cResource* cResource::get() {
  static cResource s_resource;
  return &s_resource;
}


Texture* cResource::Sprite(const SpriteID id) {
  auto it = m_sprite.find(id);
  return &it->second;
}


void cResource::removeSprite(const SpriteID id) {
  auto it = m_sprite.find(id);
  m_sprite.erase(it);
}
