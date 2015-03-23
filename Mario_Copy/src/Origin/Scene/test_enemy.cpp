
#include "test_enemy.h"


cTest_Enemy::cTest_Enemy() {
  m_enemy.componentInit();
}


void cTest_Enemy::update() {
  m_enemy.update();
}


void cTest_Enemy::draw() {
  m_enemy.draw();
}
