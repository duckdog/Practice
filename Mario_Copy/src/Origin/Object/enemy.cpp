
#include "enemy.h"


cEnemy::cEnemy() {
}


void cEnemy::update() {
}


void cEnemy::draw() {
  drawFillBox(m_move->getPos().pos.x, m_move->getPos().pos.y,
              50, 50, Color(1, 1, 1));
}
