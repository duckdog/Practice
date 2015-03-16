
#include "object.h"


cObject::cObject() {
}


void cObject::componentInit() {
  if (m_move == nullptr)
    m_move = std::make_shared<cObjectMove>(this);

  if (m_jump == nullptr)
    m_jump = std::make_shared<cObjectJump>(this);
}


void cObject::update() {
  m_jump->update();
}


void cObject::draw() {
  const float jumpPower = m_jump->getJumpPower();

  drawFillCircle(0, jumpPower, 50, 50, 100, Color::white);
}
