
#include "environment.h"


cEnvironment::cEnvironment(AppEnv& env) :
m_env(env) {
}


env env::getInstance() {
  static AppEnv env(common::WIDTH, common::HEIGHT);
  static cEnvironment environment(env);

  return environment;
}


void env::begin() {
  m_env.begin();
}


void env::end() {
  m_env.end();
}


bool env::isOpen() {
  return m_env.isOpen();
}


bool env::isMoveLeft() {
  return
    m_env.isPressKey(P1_MOVE_L) ||
    m_env.isPressKey(P2_MOVE_L);
}


bool env::isMoveRight() {
  return
    m_env.isPressKey(P1_MOVE_R) ||
    m_env.isPressKey(P2_MOVE_R);
}


bool env::isJump() {
  return
    m_env.isPushKey(P1_JUMP) ||
    m_env.isPushKey(P2_JUMP);
}
