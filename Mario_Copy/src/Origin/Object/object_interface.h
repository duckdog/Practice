
#pragma once
#include "../common.h"

class cPlayer;
class cEnemy;


class cObjectInterface {
protected:

  cPlayer* m_player;
  cEnemy*  m_enemy;

  cObjectInterface(cPlayer* obj);
  cObjectInterface(cEnemy* obj);

  virtual void update() = 0;
};
