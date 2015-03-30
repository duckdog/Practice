
#include "enemy_move.h"
#include "enemy.h"


cEnemyMove::cEnemyMove(cEnemy* obj) :
cObjectInterface(obj),
m_pos_x(0) {
}


void cEnemyMove::update() {
  if (m_enemy->isFaint()) return;

  m_pos_x += m_move_stat.speed;
  loop();
}

void cEnemyMove::loop() {
  if (m_pos_x > edge.right)
    m_pos_x = edge.left;

  if (m_pos_x < edge.left)
    m_pos_x = edge.right;
}

float cEnemyMove::getPosX() {
  return m_pos_x;
}
