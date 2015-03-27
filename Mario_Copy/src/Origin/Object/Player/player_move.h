
#pragma once
#include "../object_interface.h"
#include "../../System/environment.h"


class cPlayerMove : public cObjectInterface {
public:

  cPlayerMove(cPlayer*);

  void update();
  bool isMoving() const;


private:

  Transform m_vector;
};
