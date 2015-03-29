
#include "enemy_faint.h"


cEnemyFaint::cEnemyFaint(cEnemy* obj) :
cObjectInterface(obj),
m_faint_status(ACTIVE) {
}


void cEnemyFaint::update() {
  if (env::get()->isPushKey(Key::P1_JUMP)) {
    m_faint_status = FAINT;
  }
}


bool cEnemyFaint::isFaint() {
  return m_faint_status == FAINT;
}
