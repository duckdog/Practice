
#pragma once
#include "../common.h"
#include "../Object/object.hpp"


// TIPS: 動作確認　敵
//     : 自由に変更して大丈夫
class cTest_Enemy {
  cObject m_enemy;

public:
  cTest_Enemy();

  void update();
  void draw();
};
