
#include "scene_manager.h"


cSceneManager::cSceneManager() {
}


void cSceneManager::update() {
  // TODO: 更新
}


void cSceneManager::draw() {
  env::getInstance().setupDraw();

  // TODO: 描画処理
  drawFillCircle(0, 0, 50, 50, 100, Color(1, 1, 0));

  env::getInstance().update();
}
