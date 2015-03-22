
#include "enemy_gravity.h"


cEnemyGravity::cEnemyGravity(cObject* obj) :
cObjectInterface(obj),
m_velocity_y(0){}


void cEnemyGravity::update(){
  m_velocity_y += GRAVITY_POWER;
}

float cEnemyGravity::getVelocity(){
  return m_velocity_y;
}