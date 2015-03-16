
#pragma once
#include "object_interface.h"
#include "../System/environment.h"


class cObjectJump : public cObjectInterface {
  float m_jump_power;
  float m_velocity;

  bool isJump();

public:
  cObjectJump(cObject*);

  void update();
  float getJumpPower() const;
};
