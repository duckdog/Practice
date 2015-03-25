
#include "enemy_faint.h"


cEnemyFaint::cEnemyFaint(cEnemy* obj) :
cObjectInterface(obj),
m_faint_status(ACTIVE) {
}


void cEnemyFaint::update() {
  if (env::getInstance().isJump()){
    m_faint_status = FAINT;
  }
}


bool cEnemyFaint::isFaint() {
  return m_faint_status == FAINT;
}
