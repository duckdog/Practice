
#include "enemy_move.h"


cEnemyMove::cEnemyMove(cEnemy* obj) :
cObjectInterface(obj),
m_pos(float2(0.0f, 0.0f)){}


void cEnemyMove::update(){
  
}


float2 cEnemyMove::getPos(){
  return m_pos;
}
