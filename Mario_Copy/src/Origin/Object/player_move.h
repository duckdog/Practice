
#pragma once
#include "object_interface.h"
#include "../System/environment.h"


class cPlayerMove : public cObjectInterface {
  Transform m_vector;

public:
  cPlayerMove(cObject*);

  void update();
};
