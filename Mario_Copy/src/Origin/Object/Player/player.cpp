
#include "player.h"


cPlayer::cPlayer() {
}


void cPlayer::update() {
	m_move->update();
}


void cPlayer::draw() {
	drawFillBox(m_move->getPos().x(),m_move->getPos().y(),
				40,40,Color(1,0,0));
}


void cPlayer::componentInit() {
  m_move = std::make_unique<cPlayerMove>(this);
  m_jump = std::make_unique<cPlayerJump>(this);
}


bool cPlayer::isMoving() {
  return m_move->isMoving();
}
