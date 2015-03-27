
#pragma once
#include "../common.h"


namespace collision {
  
  bool PointToRect(const float2& pos,
                   const Transform& obj);

  bool RectToRect(const Transform& obj1,
                  const Transform& obj2);
}