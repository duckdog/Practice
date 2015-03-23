
#pragma once
#include "../common.h"

#include "title.h"


// TIPS: ����m�F�@�C���^�[�t�F�C�X
class cTest_Interface {
public:
  cTest_Interface(Font&);

  void update();
  void draw();


private:

  Font& m_font;
  cTitle m_title;
};
