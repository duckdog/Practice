
#include "gadget.h"


cGadget::cGadget() :
m_font("res/font/mplus12.ttf") {
}


cGadget cGadget::get() {
  static cGadget s_gadget;
  return s_gadget;
}


void cGadget::msgBox(const float2& pos,
                     const float2& size,
                     const Color& color) {
}


void cGadget::telop(const std::string& str,
                    const float2& pos,
                    const Color& color) {

  m_font.draw(str, Vec2f(pos.x, pos.y), color);
}


void cGadget::telopFontSize(const short size) {
  m_font.size(size);
}


float2 cGadget::getTelopSize(const std::string& str) {
  return float2(m_font.drawSize(str));
}
