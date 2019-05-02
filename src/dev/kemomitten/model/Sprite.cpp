#include "Sprite.h"

Sprite::Sprite() {}
Sprite::Sprite(double x, double y, double w, double h) {
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;
}

double Sprite::getX(){
  return x;
}
double Sprite::getY(){
  return y;
}
double Sprite::getW(){
  return w;
}
double Sprite::getH(){
  return h;
}

std::string Sprite::toString(){
  std::stringstream ss;
  ss << x << "," << y << "," << w << "," << h;
  return ss.str();
}
