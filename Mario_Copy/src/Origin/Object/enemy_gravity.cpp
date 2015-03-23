
#include "enemy_gravity.h"


cEnemyGravity::cEnemyGravity(cObject* obj) :
cObjectInterface(obj),
m_position_y(0),
m_velocity_y(0){}


void cEnemyGravity::update(){
  m_position_y += m_velocity_y;
  m_velocity_y += GRAVITY_POWER;
}

float cEnemyGravity::getVelocity(){
  return m_position_y;
}