
#include "player.h"
#include "player_move.h"


cPlayerMove::cPlayerMove(cPlayer* obj) :
cObjectInterface(obj) {
}


void cPlayerMove::update() {
}


bool cPlayerMove::isMoving() const {
  return true;
}
