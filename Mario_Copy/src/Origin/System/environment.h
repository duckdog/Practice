
#pragma once
#include "../common.h"


namespace environment {

  enum KeyList {
    P1_MOVE_L = GLFW_KEY_A,
    P1_MOVE_R = GLFW_KEY_D,
    P1_JUMP   = GLFW_KEY_LEFT_CONTROL,    // LeftControl

    P2_MOVE_L = GLFW_KEY_LEFT,
    P2_MOVE_R = GLFW_KEY_RIGHT,
    P2_JUMP   = GLFW_KEY_RIGHT_CONTROL,   // RightControl

    SELECT_UP   = GLFW_KEY_UP,
    SELECT_DOWN = GLFW_KEY_DOWN,
    ENTER       = GLFW_KEY_ENTER,
  };
}


class cEnvironment {
public:

  static AppEnv* get();


private:

  // TIPS: Ç±ÇÃÉNÉâÉXÇÃêÈåæÇãñâ¬ÇµÇ»Ç¢
  cEnvironment() = delete;
};

typedef cEnvironment          env;
typedef environment::KeyList  Key;
