
#pragma once
#include "object_interface.h"
#include <map>


class cEnemyType : public cObjectInterface {
public:

  cEnemyType(cObject*);

  void update();


private:

  enum EnemyID {
    SHELLCREEPERT,   // カメ
    SIDESTEPPER,     // カニ
    FIGHTERFLY,      // ハエ
  };

  struct EnemyStatus {
    float   move_speed;
    float   gravity;
    Texture image;
  };

  std::map<EnemyID, EnemyStatus> status;

};