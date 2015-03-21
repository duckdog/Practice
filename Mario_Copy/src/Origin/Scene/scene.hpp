
#pragma once
#include "../common.h"

//
// 基底クラス
//

class cScene {
public:

  virtual void update() = 0;
  virtual void draw()   = 0;


protected:

  cScene() {
    m_effect.init();
  }

  struct {
    short time;    // 点滅タイマー
    short blink;   // 点滅状態
    float alpha;   // 透明度

    void init() {
      time = 0;
      blink = 0;
      alpha = 1.0f;
    }
  } m_effect;   // TIPS: 演出用のパラメータ
};
