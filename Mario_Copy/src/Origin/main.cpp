// 金剛デース

#include "Object/object.h"
#include "System/environment.h"

int main() {
  env::getInstance();

  cObject obj;
  obj.componentInit();

  while (env::getInstance().isOpen()) {
    obj.update();

    env::getInstance().begin();

    obj.draw();

    env::getInstance().end();
  }
}
