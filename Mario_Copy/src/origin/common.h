
#pragma once
#include "../lib/defines.hpp"
#include "../lib/appEnv.hpp"


namespace common {

  enum ApplicationWindowSize {
    WIDTH  = 512,
    HEIGHT = 512,
  };
}


struct float2 {
  float x;
  float y;

  float2(float x0 = 0.0f, float y0 = 0.0f)
    : x(x0), y(y0) {}

  float2(const Vec2f& other)
    : x(other.x()), y(other.y()) {}

  static float2 Zero() { return float2(0, 0); }

  void operator=(const Vec2f& other) {
    x = other.x();
    y = other.y();
  }
};
