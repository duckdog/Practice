
#pragma once
#include "../common.h"
#include "../Object/player.h"


// TIPS: 動作確認　プレイヤー
//     : 自由に変更して大丈夫
class cTest_Player {
public:
  cTest_Player();

  void update();
  void draw();


private:

  cPlayer m_player;
};
