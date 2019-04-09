#include "config.h"
#include "vector"


class BallReceiver {
 public:
  BallReceiver() {}

  void Add(const Point& p);
  Point Receive() const;

 private:
  std::vector <Point> buffer_;
};