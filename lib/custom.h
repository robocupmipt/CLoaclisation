//
// Created by Vladislav Molodtsov on 2019-03-31.
//

#ifndef __CUSTOM_H__
#define __CUSTOM_H__
#include "geometry.h"

/* --------------------- Custom classes ------------------------ */

/*
 *
 * You can change these on your own.
 *
 */
namespace message {

/*
 *
 * Input class for receiving from Vision
 *
*/
struct ReceiveFromVision {
  Point p;
  void Print();
};

/*
 *
 * Output class for transmission to Vision
 *
*/
struct SendToVision {
  float x = 0, y = 0;

  void Print();
};

/*
 *
 * Input class for receiving from Strategy
 *
*/
struct ReceiveFromStrategy {
  float x = 0, y = 0;

  void Print();
};

/*
 *
 * Output class for transmission to Strategy
 *
*/
struct SendToStrategy {
  float x = 0, y = 0;

  void Print();
};

} /* namespace message */

#endif /* __CUSTOM_H__ */
