
#pragma once
#include "object_interface.h"
#include "../System/environment.h"


class cPlayerJump : public cObjectInterface {
  float m_jump_power;
  float m_velocity;

  bool isJump();

public:
  cPlayerJump(cObject*);

  void update();
  float getJumpPower() const;
};
