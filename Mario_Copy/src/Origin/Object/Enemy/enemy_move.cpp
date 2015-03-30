
#include "enemy_move.h"


cEnemyMove::cEnemyMove(cEnemy* obj) :
cObjectInterface(obj),
m_pos_x(0) {
}


void cEnemyMove::update() {
  // if (m_enemy->isFaint()) return;

  m_pos_x += SPEED;
}


float cEnemyMove::getPosX() {
  return m_pos_x;
}
