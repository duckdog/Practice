
#include "player.h"
#include "player_jump.h"


enum {
  JUMP_POWER = 20,
  GRAVITY = 1,
};


cPlayerJump::cPlayerJump(cPlayer* obj) :
cObjectInterface(obj),
m_jump_power(0.0f),
m_velocity(0.0f) {
}


void cPlayerJump::update() {
  if (isJump()) return;

  m_player->isMoving();

  if (env::getInstance().isJump()) {
    m_jump_power = 0.0f;
    m_velocity = JUMP_POWER;
  }
}


bool cPlayerJump::isJump() {
  m_jump_power += m_velocity;
  m_velocity -= GRAVITY;

  if (m_jump_power <= 0.0f)
    m_jump_power = 0.0f;

  return m_jump_power > 0.0f;
}


float cPlayerJump::getJumpPower() const {
  return m_jump_power;
}
