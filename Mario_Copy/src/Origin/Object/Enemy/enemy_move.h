
#pragma once
#include "../object_interface.h"


class cEnemyMove : public cObjectInterface {
public:

  cEnemyMove(cEnemy*);

  void   update();
  float  getPosX();


private:

  enum MoveSpeed{
    SPEED = 5
  };

  float m_pos_x;
};
