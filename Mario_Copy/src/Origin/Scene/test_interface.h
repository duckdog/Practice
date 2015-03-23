
#pragma once
#include "../common.h"

#include "title.h"


// TIPS: 動作確認　インターフェイス
class cTest_Interface {
public:
  cTest_Interface(Font&);

  void update();
  void draw();


private:

  Font& m_font;
  cTitle m_title;
};
