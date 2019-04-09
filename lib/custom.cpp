//
// Created by Vladislav Molodtsov on 2019-03-31.
//

#include "custom.h"
#include "geometry.h"
#include "iostream"


/* --------------------- Custom classes ------------------------ */

/*
 *
 * You can change these on your own.
 *
 */

using namespace message;

/*
 *
 * ReceiveFromVisionFromVision class for receiving
 *
*/

void ReceiveFromVision::Print() {
  std::cout << "(x, y) = (" << p.x << ", " << p.y << ")" << std::endl;
}

/*
 *
 * SendToVToVision class for trasnmission
 *
*/

void SendToVision::Print() {}

/*
 *
 * ReceiveFromStrategy class for receiving
 *
*/

void ReceiveFromStrategy::Print() {
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}


/*
 *
 * SendToVision class for trasnmission
 *
*/

void SendToStrategy::Print()
{
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}

