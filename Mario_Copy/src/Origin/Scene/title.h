
#pragma once
#include "scene.hpp"
#include <vector>


class cTitle : public cScene {
public:

  cTitle(Font&);

  void update();
  void draw();


private:

  enum StringList {
    TitleLogo,
    StartButton,

    All_String,
  };
  std::vector<std::string> m_string;

  Texture m_test;
  short m_blink;

  void titleLogo();
  void startButton();

  void testDraw();
};
