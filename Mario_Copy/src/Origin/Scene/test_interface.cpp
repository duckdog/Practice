
#include "test_interface.h"
#include "../System/gadget.h"


cTest_Interface::cTest_Interface(Font& font) :
m_font(font),
m_title(font) {
}


void cTest_Interface::update() {
  m_title.update();
}


void cTest_Interface::draw() {
  m_title.draw();
}
