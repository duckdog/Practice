
#include "scene_manager.h"


cSceneManager::cSceneManager() {
}


void cSceneManager::update() {
  // TODO: XV
}


void cSceneManager::draw() {
  env::getInstance().setupDraw();

  // TODO: •`‰æˆ—
  drawFillCircle(0, 0, 50, 50, 100, Color(1, 1, 0));

  env::getInstance().update();
}
