
#pragma once
#include "object_interface.h"


class cEnemyMove : public cObjectInterface {
public:

  cEnemyMove(cObject*);

  void update();
  float2 getPos();

private:

  float2 m_pos;

};