
#pragma once
#include "../object.hpp"
#include "../../System/environment.h"
#include "enemy_type.h"
#include "enemy_gravity.h"
#include "enemy_move.h"
#include "enemy_faint.h"
#include <memory>


class cEnemy : public cObject {
public:

  cEnemy();

  void update();
  void draw();

  void componentInit();


private:

  std::shared_ptr<cEnemyType>    m_type;
  std::shared_ptr<cEnemyMove>    m_move;
  std::shared_ptr<cEnemyGravity> m_gravity;
  std::shared_ptr<cEnemyFaint>   m_faint;


  Color color;
};
