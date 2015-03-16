
#include "object_jump.h"


enum {
  JUMP_POWER = 20,
  GRAVITY = 1,
};


cObjectJump::cObjectJump(cObject* obj) :
cObjectInterface(obj),
m_jump_power(0.0f),
m_velocity(0.0f) {
}


void cObjectJump::update() {
  if (isJump()) return;

  if (env::getInstance().isJump()) {
    m_jump_power = 0.0f;
    m_velocity = JUMP_POWER;
  }
}


bool cObjectJump::isJump() {
  m_jump_power += m_velocity;
  m_velocity -= GRAVITY;

  if (m_jump_power <= 0.0f)
    m_jump_power = 0.0f;

  return m_jump_power > 0.0f;
}


float cObjectJump::getJumpPower() const {
  return m_jump_power;
}
