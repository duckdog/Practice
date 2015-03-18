
#pragma once
#include "../common.h"
#include "../Object/object.h"


// TIPS: 動作確認　プレイヤー
//     : 自由に変更して大丈夫
class cTest_Player {
  cObject m_player;

public:
  cTest_Player();

  void update();
  void draw();
};
