
#include "environment.h"


cEnvironment::cEnvironment(AppEnv& env0) :
m_env(env0) {
}


cEnvironment env::getInstance() {
  static AppEnv app_env(common::WIDTH, common::HEIGHT, false, false);
  static env temp(app_env);
  return temp;
}


void env::setupDraw() {
  m_env.setupDraw();
}


void env::update() {
  m_env.update();
}


bool env::isOpen() {
  return m_env.isOpen();
}


bool env::isMoveLeft() const {
  return
    m_env.isPressKey(Key::PLAYER_1_LEFT) ||
    m_env.isPressKey(Key::PLAYER_2_LEFT);
}


bool env::isMoveRight() const {
  return
    m_env.isPressKey(Key::PLAYER_1_RIGHT) ||
    m_env.isPressKey(Key::PLAYER_2_RIGHT);
}


bool env::isJump() const {
  return
    m_env.isPushKey(Key::PLAYER_1_JUMP) ||
    m_env.isPushKey(Key::PLAYER_2_JUMP);
}


u_int env::getPushedKey() const {
  return m_env.getPushedKey();
}
