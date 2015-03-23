
#pragma once
#include "object_interface.h"


class cEnemyLife : public cObjectInterface {
public:

  cEnemyLife(cEnemy*);

  void  update();
  short getLife();
  bool  isDead();


private:

  short m_life;
};
