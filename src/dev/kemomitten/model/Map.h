#pragma once

#include "All.h"
#include "../Common.h"
#include <map>

class Map{

protected:
  std::map<std::string, Sprite*> sprites;

public:
  Map();
  Sprite* getSprite(std::string uid);
  bool addSprite(std::string uid, Sprite* s);
  bool removeSprite(std::string uid);
  bool contains(std::string uid);
  std::map<std::string, Sprite*> getSprites();
};
