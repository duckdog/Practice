
#pragma once
#include "object_interface.h"
#include "../System/environment.h"


class cEnemyFaint : public cObjectInterface {
public:

  cEnemyFaint(cEnemy*);

  void update();
  bool isFaint();


private:

  enum EnemyFaintStatus {
    FAINT,     // ‹Câ’†
    ACTIVE     // Šˆ“®’†
  };
  short m_faint_status;
};