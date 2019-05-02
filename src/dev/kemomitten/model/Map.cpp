#include "Map.h"

Map::Map(){}

Sprite* Map::getSprite(std::string uid){
  return contains(uid)? sprites[uid] : NULL;
}
bool Map::addSprite(std::string uid, Sprite* s){
  if (contains(uid)){
    return false;
  }

  sprites.insert({uid, s});
  return true;
}
bool Map::removeSprite(std::string uid){
  if (contains(uid)){
    delete sprites[uid];
    sprites.erase(uid);
    return true;
  }
  return false;
}
bool Map::contains(std::string uid){
  std::map<std::string, Sprite*>::iterator it = sprites.find(uid);
  return it != sprites.end();
}

std::map<std::string, Sprite*> Map::getSprites(){
  return sprites;
}
