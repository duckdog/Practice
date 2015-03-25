
#pragma once
#include "../lib/framework.hpp"


namespace common {

  enum WindowSize {
    WIDTH = 1200,
    HEIGHT = 900,
  };

  enum Direction {
    LEFT,
    RIGHT,
  };

  enum EnemyID {
    SHELL_CREEPERT,   // カメ
    SIDE_STEPPER,     // カニ
    FIGHTER_FLY,      // ハエ

    All_Enemy,
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


struct Transform {
  float2 pos;
  float2 size;
  short direction;
};


struct Effect {
  short time;
  short blink;
  float alpha;

  void init() {
    time  = 0;
    blink = 0;
    alpha = 1.0f;
  }

  Effect() { init(); }
};
