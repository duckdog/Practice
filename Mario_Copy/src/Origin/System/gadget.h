
#pragma once
#include "../common.h"
#include <string>


class cGadget {

  // TIPS: このクラスを直接宣言できないようにする
  cGadget();

  Font m_font;

public:

  // TIPS: コンストラクタではなく、
  //     : この関数を使って機能を提供する
  static cGadget get();

  // メッセージウィンドウの描画
  void msgBox(const float2& pos,
              const float2& size,
              const Color& color);

  // 文字列の描画
  void telop(const std::string& str,
             const float2& pos,
             const Color& color = Color::white);

  // 文字列のフォントサイズを設定
  void telopFontSize(const short size);

  // 文字列描画時のサイズを取得
  float2 getTelopSize(const std::string& str);
};

typedef cGadget  gadget;
