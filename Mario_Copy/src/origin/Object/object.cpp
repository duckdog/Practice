
#include "object.h"


cObject::cObject() {
}


float2 cObject::getPos() {
  return m_pos;
}


void cObject::draw() {
  drawTextureBox(m_pos.x, m_pos.y, m_size.x, m_size.y,
                 0, 0, m_size.x, m_size.y,
                 m_own, Color(1, 1, 1));
}
