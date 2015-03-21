
#pragma once
#include "environment.h"
#include "../Scene/test_enemy.h"
#include "../Scene/test_player.h"
#include "../Scene/test_interface.h"


// XXX: ここは基本的に変更しないこと
//    : 変更を加える場合は必ず連絡！
class cSceneManager {
public:

  cSceneManager();

  void start();

  void update();
  void draw();


private:

  cTest_Enemy     m_enemy;
  cTest_Player    m_player;
  cTest_Interface m_interface;

  Font m_font;
  Effect m_effect;
};
