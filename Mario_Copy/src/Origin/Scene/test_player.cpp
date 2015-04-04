
#include "test_player.h"


cTest_Player::cTest_Player() {
	m_player.componentInit();
}


void cTest_Player::update() {
  m_player.update();
}


void cTest_Player::draw() {
  m_player.draw();
}
