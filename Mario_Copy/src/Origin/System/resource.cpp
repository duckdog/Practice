
#include "resource.h"


cResource::cResource() {
}


cResource cResource::getInstance() {
  static cResource s_resource;
  return s_resource;
}


Texture cResource::getSprite(const SpriteID id) {
  auto it = m_sprite.find(id);
  return it->second;
}


void cResource::removeSprite(const SpriteID id) {
  auto it = m_sprite.find(id);
  m_sprite.erase(it);
}
