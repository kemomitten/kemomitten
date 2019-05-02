#include "Common.h"
#include "model/All.h"
#include <map>

int main(){
  Map m;
  for(int a=0; a<10; a++){
    Sprite *s = new Sprite(10*a,10,32,32);
    std::stringstream ss;
    ss << a;
    m.addSprite(ss.str(), s);
  }
  auto sprites = m.getSprites();
  for(std::map<std::string,Sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it){
    std::cout << it->first << ": " << it->second->toString() << std::endl;
  }
  return 0;
}
