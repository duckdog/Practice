
#pragma once
#include "object_interface.h"


class cEnemyMove : public cObjectInterface {
public:

  cEnemyMove(cObject*);

  void update();
  Transform getPos();

private:

  Transform m_vector;

};