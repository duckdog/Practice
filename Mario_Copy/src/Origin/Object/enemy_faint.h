
#pragma once
#include "object_interface.h"


class cEnemyFaint : public cObjectInterface {
public:

  cEnemyFaint(cObject*);

  void update();
  bool isFaint();


private:

  enum EnemyFaintStatus {
    FAINT,     // �C�⒆
    ACTIVE     // ������
  };
  short m_faint_status;
};