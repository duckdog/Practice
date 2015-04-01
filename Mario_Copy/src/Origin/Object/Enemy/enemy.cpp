
#include "enemy.h"


cEnemy::cEnemy() {
  color = Color(1, 1, 1);
}


void cEnemy::componentInit() {
  if (m_type == nullptr)
    m_type = std::make_shared<cEnemyType>(this);

  if (m_move == nullptr)
    m_move = std::make_shared<cEnemyMove>(this);

  if (m_gravity == nullptr)
    m_gravity = std::make_shared<cEnemyGravity>(this);

  if (m_faint == nullptr)
    m_faint = std::make_shared<cEnemyFaint>(this);
}


void cEnemy::update() {
  m_move->update();
  m_faint->update();
  if (m_faint->isFaint()){
    color = Color(1, 0, 0);
  }
  else{
    color = Color(1, 1, 1);
  }
}

void cEnemy::draw() {
  drawFillBox(m_move->getPosX(), m_gravity->getVelocity(),
              50, 50, color);
}


bool cEnemy::isFaint(){
  return m_faint->isFaint();
}