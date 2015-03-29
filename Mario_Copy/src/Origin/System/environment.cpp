
#include "environment.h"


AppEnv* env::get() {
  static AppEnv s_env(common::WIDTH, common::HEIGHT,
                      false, true);
  return &s_env;
}
