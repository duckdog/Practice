
#pragma once
#include "../lib/framework.hpp"


namespace common {

  // ‚ ‚Î‚Î‚Î‚Î
  enum WindowSize {
    WIDTH = 1200,
    HEIGHT = 900,
  };
}


struct float2 {
  float x;
  float y;

  float2(const float fx = 0.0f, const float fy = 0.0f) :
    x(fx), y(fy) {}

  float2(const Vec2f& other) :
    x(other.x()), y(other.y()) {}
};


struct Object {
  float2 pos;
  float2 size;
  short direction;
};
