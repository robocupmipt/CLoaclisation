#include <vector>

struct Point {
  float x;
  float y;
  Point(float x = 0, float y = 0) : x(x), y(y) {}
  Point(const Point& other) : x(other.x), y(other.y) {}
};

struct GameState {
  Point ball;
};