
#pragma once
#include "../common.h"


class cGadget {
public:

  // TIPS: コンストラクタではなく、
  //     : この関数を使って機能を提供する
  static cGadget draw();

  // メッセージウィンドウの描画
  void msgBox(const float2& pos,
              const float2& size,
              const Color& color);


private:

  // TIPS: このクラスを直接宣言できないようにする
  cGadget();
};

typedef cGadget  gadget;
