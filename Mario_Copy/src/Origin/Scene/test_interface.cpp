
#include "test_interface.h"
#include "../System/gadget.h"


cTest_Interface::cTest_Interface(Font& font) :
m_font(font) {
}


void cTest_Interface::update() {
}


void cTest_Interface::draw() {
  m_font.draw("hoge", Vec2f(0, 0), Color::white);
}
