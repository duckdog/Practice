
#pragma once
#include "../object_interface.h"
#include "../../System/environment.h"


class cPlayerMove : public cObjectInterface {
public:

  cPlayerMove(cPlayer*);

  void update();
  void keyControl();
  bool isMoving() const;

  Vec2f getPos();

private:
  
  Vec2f m_pos;
  const float  m_speed = 2.0f;
  
};
