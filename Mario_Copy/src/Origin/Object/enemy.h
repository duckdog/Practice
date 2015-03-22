
#pragma once
#include "object.hpp"
#include "../System/environment.h"
#include "enemy_gravity.h"
#include "enemy_move.h"
#include <memory>

class cEnemy : public cObject {
public:

  cEnemy();

  void update();
  void draw();


private:

  std::shared_ptr<cEnemyMove>    m_move;
  std::shared_ptr<cEnemyGravity> m_gravity;
};
