
#pragma once
#include "object_interface.h"


class cEnemyFaint : public cObjectInterface {
public:

  cEnemyFaint(cObject*);

  void update();
  bool isFaint();


private:

  enum EnemyFaintStatus {
    FAINT,     // ‹Câ’†
    ACTIVE     // Šˆ“®’†
  };
  short m_faint_status;
};