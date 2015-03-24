
#include "title.h"


cTitle::cTitle(Font& font) :
cScene(font),
m_blink(0) {

  const std::string StringData[] = {
    "タイトル",
    "スタートするボタン",
  };

  for (auto& it : StringData) {
    m_string.emplace_back(it);
  }
}


void cTitle::update() {
  ++m_blink;
  if (m_blink >= 60) { m_blink = 0; }
}


void cTitle::draw() {
  titleLogo();
  startButton();
}


void cTitle::titleLogo() {
  const std::string& Logo = m_string[TitleLogo];
  const float LogoPosX = -m_font.drawSize(Logo).x() / 2;
  const float LogoPosY = common::HEIGHT / 2 - m_font.drawSize(Logo).y() * 4;

  m_font.draw(Logo, Vec2f(LogoPosX, LogoPosY), Color::white);
}


void cTitle::startButton() {
  const std::string& Button = m_string[StartButton];
  const float StringPosX = -m_font.drawSize(Button).x() / 2;
  const Color BtnColor = Color(1, 1, 0, (m_blink / 30) % 2);

  m_font.draw(Button, Vec2f(StringPosX, 0), BtnColor);
}
