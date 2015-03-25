
#include "enemy_life.h"


cEnemyLife::cEnemyLife(cEnemy* obj) :
cObjectInterface(obj) {
}


void cEnemyLife::update() {

}


short cEnemyLife::getLife() {
  return m_life;
}


bool cEnemyLife::isDead() {
  return m_life == 0;
}
