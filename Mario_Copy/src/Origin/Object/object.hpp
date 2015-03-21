
#pragma once


class cObject {
public:

  cObject() = default;

  virtual void update() = 0;
  virtual void draw()   = 0;
};
