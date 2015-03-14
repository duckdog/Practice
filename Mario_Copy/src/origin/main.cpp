
#include "System/environment.h"
#include "System/game_player.h"


int main() {
  env::getInstance();
  cGamePlayer game;
  game.run();
}
