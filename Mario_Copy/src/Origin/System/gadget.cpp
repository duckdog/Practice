
#include "gadget.h"


enum {
  FrameWidth = 4,
};


cGadget::cGadget() {
}


cGadget* cGadget::draw() {
  static cGadget s_gadget;
  return &s_gadget;
}


void cGadget::msgBox(const float2& pos,
                     const float2& size,
                     const Color& color) {

  drawFillBox(pos.x, pos.y,
              size.x, size.y,
              color);

  drawBox(pos.x, pos.y,
          size.x, size.y,
          FrameWidth, Color::white);
}
