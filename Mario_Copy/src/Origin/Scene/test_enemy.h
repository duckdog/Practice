
#pragma once
#include "../common.h"
#include "../Object/Enemy/enemy.h"


// TIPS: 動作確認　敵
//     : 自由に変更して大丈夫
class cTest_Enemy {
public:
  cTest_Enemy();

  void update();
  void draw();


private:

  cEnemy m_enemy;
};
