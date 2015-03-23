
#include "enemy_faint.h"


cEnemyFaint::cEnemyFaint(cObject* obj) :
cObjectInterface(obj),
m_faint_status(ACTIVE){}


void cEnemyFaint::update(){

}

bool cEnemyFaint::isFaint(){
  return m_faint_status == FAINT;
}