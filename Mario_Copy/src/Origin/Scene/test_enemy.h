
#pragma once
#include "../common.h"
#include "../Object/Enemy/enemy.h"


// TIPS: ����m�F�@�G
//     : ���R�ɕύX���đ��v
class cTest_Enemy {
public:
  cTest_Enemy();

  void update();
  void draw();


private:

  cEnemy m_enemy;
};
