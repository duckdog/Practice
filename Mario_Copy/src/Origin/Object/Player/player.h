
#pragma once
#include "../object.hpp"
#include "player_move.h"
#include "player_jump.h"
#include <memory>


class cPlayer : public cObject {
public:

  cPlayer();

  void update();
  void draw();

  void componentInit();

  bool isMoving();


private:
  
  std::unique_ptr<cPlayerMove> m_move;
  std::unique_ptr<cPlayerJump> m_jump;
	
  Color m_color;
};
