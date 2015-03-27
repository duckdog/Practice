
#pragma once
#include "../object_interface.h"
#include <map>


class cEnemyType : public cObjectInterface {
public:

  cEnemyType(cEnemy*);

  void update();


private:

  struct EnemyStatus {
    float   move_speed;
    float   gravity;
    Texture image;
  };

  std::map<common::EnemyID, EnemyStatus> status;

};
