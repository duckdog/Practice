
#include "title.h"


cTitle::cTitle(Font& font) :
cScene(font) {
}


void cTitle::update() {
}


void cTitle::draw() {
  m_font.draw("�������̐킢�i���j", Vec2f(0, 0), Color::white);
  m_font.draw("�`�D���ҁ`", Vec2f(0, -50), Color::yellow);
}
