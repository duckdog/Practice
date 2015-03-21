
#pragma once


class cObject {
public:
  cObject();

  virtual void update() = 0;
  virtual void draw() = 0;
};
