
#pragma once
#include "../common.h"


enum FontSize {
  Small,
  Large,
};


class cGadget {

  cGadget();

public:

  static cGadget get();

  void msgBox();
  void telop();
};

typedef cGadget  gadget;
