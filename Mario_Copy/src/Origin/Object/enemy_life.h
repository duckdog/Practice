
#pragma once
#include "object_interface.h"


class cEnemyLife : public cObjectInterface {
public:

  cEnemyLife(cObject*);

  void  update();
  short getLife();
  bool  isDead();


private:

  short m_life;
};