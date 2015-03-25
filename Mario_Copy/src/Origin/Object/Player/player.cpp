
#include "player.h"


cPlayer::cPlayer() {
}


void cPlayer::update() {
}


void cPlayer::draw() {
}


void cPlayer::componentInit() {
  m_move = std::make_unique<cPlayerMove>(this);
  m_jump = std::make_unique<cPlayerJump>(this);
}


bool cPlayer::isMoving() {
  return m_move->isMoving();
}
