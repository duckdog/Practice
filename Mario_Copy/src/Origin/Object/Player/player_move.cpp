
#include "player.h"
#include "player_move.h"


cPlayerMove::cPlayerMove(cPlayer* obj) :
cObjectInterface(obj),
m_pos(0.0f,50.0f){
	
}


void cPlayerMove::update() {
	keyControl(); 
}

void cPlayerMove::keyControl(){
	if (env::get()->isPressKey(Key::P1_MOVE_L)){
		m_pos.x() -= m_speed;
		isMoving();
	}
	else if (env::get()->isPressKey(Key::P1_MOVE_R)){
		m_pos.x() += m_speed;
		isMoving();
	}
}


bool cPlayerMove::isMoving() const {
  return true;
}

Vec2f cPlayerMove::getPos() {
	return m_pos;
}
