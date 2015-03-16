
#pragma once
#include "object_move.h"
#include "object_jump.h"
#include <memory>


class cObject {
  std::shared_ptr<cObjectMove> m_move;
  std::shared_ptr<cObjectJump> m_jump;

  Texture m_own;

public:
  cObject();

  void componentInit();

  void update();
  void draw();
};
