
#include "scene_manager.h"


cSceneManager::cSceneManager() :
m_font("res/font/mplus12r.ttf"),
m_interface(m_font) {

  m_font.size(40);
}


void cSceneManager::start() {
}


void cSceneManager::update() {
  m_enemy.update();
  m_player.update();
  m_interface.update();
}


void cSceneManager::draw() {
  env::getInstance().begin();

  m_enemy.draw();
  m_player.draw();
  m_interface.draw();

  env::getInstance().end();
}
