
#include "enemy_move.h"


cEnemyMove::cEnemyMove(cObject* obj) :
cObjectInterface(obj){}


void cEnemyMove::update(){
  m_vector.pos.x += 10;
}
