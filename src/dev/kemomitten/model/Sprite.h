#pragma once

#include "../Common.h"

class Sprite {

protected:
  double x{0};
  double y{0};
  double w{0};
  double h{0};

public:
  Sprite();
  Sprite(double x1, double y1, double w1, double h1);
  double getX();
  double getY();
  double getW();
  double getH();
  std::string toString();
};
