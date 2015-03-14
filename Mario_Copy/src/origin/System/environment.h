
#pragma once
#include "../common.h"


enum Key {
  PLAYER_1_LEFT = GLFW_KEY_A,
  PLAYER_2_LEFT = GLFW_KEY_LEFT,

  PLAYER_1_RIGHT = GLFW_KEY_D,
  PLAYER_2_RIGHT = GLFW_KEY_RIGHT,

  PLAYER_1_JUMP = GLFW_KEY_LEFT_CONTROL,
  PLAYER_2_JUMP = GLFW_KEY_RIGHT_CONTROL,
};


class cEnvironment {
  AppEnv& m_env;

public:
  cEnvironment(AppEnv&);
  static cEnvironment getInstance();

  void setupDraw();
  void update();

  bool isOpen();

  bool isMoveLeft() const;
  bool isMoveRight() const;
  bool isJump() const;

  u_int getPushedKey() const;
};

typedef cEnvironment  env;
