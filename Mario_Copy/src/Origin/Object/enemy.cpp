
#include "enemy.h"


cEnemy::cEnemy() {

}


void cEnemy::componentInit(){
  if (m_type == nullptr)
    m_type = std::make_shared<cEnemyType>(this);

  if (m_move == nullptr)
    m_move = std::make_shared<cEnemyMove>(this);

  if (m_gravity == nullptr)
    m_gravity = std::make_shared<cEnemyGravity>(this);
}


void cEnemy::update() {
  m_gravity->update();
}


void cEnemy::draw() {
  drawFillBox(m_move->getPos().x, m_gravity->getVelocity(),
              50, 50, Color(1, 1, 1));
}
