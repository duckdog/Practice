
#pragma once
#include "../common.h"


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


class cEnvironment {
  cEnvironment(AppEnv&);
  AppEnv& m_env;

public:
  static cEnvironment getInstance();

  void begin();
  void end();

  bool isOpen();

  bool isMoveLeft();
  bool isMoveRight();
  bool isJump();

  //bool isSelectUp();
  //bool isSelectDown();
  //bool isPushEnter();
};

typedef cEnvironment  env;
