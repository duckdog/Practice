
#pragma once
#include "../common.h"
#include "../Object/Player/player.h"


// TIPS: ����m�F�@�v���C���[
//     : ���R�ɕύX���đ��v
class cTest_Player {
public:
  cTest_Player();

  void update();
  void draw();


private:

  cPlayer m_player;
};
