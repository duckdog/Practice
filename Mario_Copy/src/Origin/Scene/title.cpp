
#include "title.h"
#include "../System/gadget.h"


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

  // FIXME: 画像データ渡してないので、コメントアウト
  //m_test = Texture("res/png/title_back.png");
}


void cTitle::update() {
  ++m_blink;
  if (m_blink >= 60) { m_blink = 0; }
}


void cTitle::draw() {
  //testDraw();
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

  gadget::draw()->msgBox(float2(StringPosX - 20, -20),
                         float2(-StringPosX * 2 + 50, 70),
                         Color::blue);

  m_font.draw(Button, Vec2f(StringPosX, 0), BtnColor);
}


void cTitle::testDraw() {
  const Vec2f pos(-common::WIDTH / 2, -common::HEIGHT / 2);

  drawTextureBox(pos.x(), pos.y(), common::WIDTH, common::HEIGHT,
                 0, 0, 1024, 1024,
                 m_test, Color::white);
}
