
#pragma once
#include "common.h"


namespace collision {
  
  bool PointToRect(float2 pos, Transform obj){
    if ((pos.x > obj.pos.x) &&
        (pos.x < obj.pos.x + obj.size.x)){
      if ((pos.y > obj.pos.y) &&
          (pos.y < obj.pos.y + obj.size.y)){
        return true;
      }
    }
    return false;
  }

  bool RectToRect(Transform obj1, Transform obj2){
    if ((obj1.pos.x + obj1.size.x > obj2.pos.x) &&
        (obj1.pos.x < obj2.pos.x + obj2.size.x)){
      if ((obj1.pos.y + obj1.size.y > obj2.pos.y) &&
          (obj1.pos.y < obj2.pos.y + obj2.size.y)){
        return true;
      }
    }
    return false;
  }
}