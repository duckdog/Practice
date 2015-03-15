
#pragma once
#include "../common.h"


class cObject {
protected:
  Texture m_own;

  float2 m_pos;
  float2 m_size;
  float m_rotation;

public:
  cObject();

  float2 getPos();
  void draw();
};
