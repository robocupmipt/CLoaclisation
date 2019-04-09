#include "receivers.h"

void BallReceiver::Add(const Point& p) {
  buffer_.push_back(p);
}

Point BallReceiver::Receive() const {
  Point res(0, 0);
  float k = 0;
  for (auto& p : buffer_) {
    res += p;
    ++k;
  }

  if (k > 0) {
    return res /= k;
  } else {
    return res;
  }
}