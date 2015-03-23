
#include "object.hpp"
#include "object_interface.h"


cObjectInterface::cObjectInterface(cPlayer* obj) :
m_player(obj) {
}


cObjectInterface::cObjectInterface(cEnemy* obj) :
m_enemy(obj) {
}
