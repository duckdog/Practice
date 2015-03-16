
#pragma once
#include "object_interface.h"
#include "../System/environment.h"


class cObjectMove : public cObjectInterface {
  Object m_vector;

public:
  cObjectMove(cObject*);

  void update();
};
