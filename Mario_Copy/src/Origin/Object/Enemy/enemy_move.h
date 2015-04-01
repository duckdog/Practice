
#pragma once
#include "../object_interface.h"


class cEnemyMove : public cObjectInterface {
public:

  cEnemyMove(cEnemy*);

  void   update();
  float  getPosX();


private:

  // âÊñ í[èÓïÒ
  common::WindowEdge edge;

  void loop();

  enum MoveSpeed{
    SPEED = 5
  };

  struct MoveStatus{
    float speed = MoveSpeed::SPEED;
    const float sign  = -1;
  }m_move_stat;

  float m_pos_x;
};
