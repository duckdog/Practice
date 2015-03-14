
#pragma once
#include "environment.h"
#include "scene_manager.h"


class cGamePlayer {
  cSceneManager m_scene;

public:
  cGamePlayer() {}

  void run() {
    while (env::getInstance().isOpen()) {
      m_scene.update();
      m_scene.draw();
    }
  }
};
