
#include "gadget.h"


cGadget::cGadget() {
}


cGadget cGadget::draw() {
  static cGadget s_gadget;
  return s_gadget;
}


void cGadget::msgBox(const float2& pos,
                     const float2& size,
                     const Color& color) {
}
