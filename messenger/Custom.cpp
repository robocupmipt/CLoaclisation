//
// Created by Vladislav Molodtsov on 2019-03-31.
//

#include"Custom.h"
#include"iostream"

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

void ReceiveFromVisionFromVision::Print()
{
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}

void ReceiveFromVisionFromVision::Write(float x1, float y1)
{
  x = x1;
  y = y1;
}

/*
 *
 * SendToVToVision class for trasnmission
 *
*/

void SendToVToVision::Print()
{
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}

void SendToVToVision::Write(float x1, float y1)
{
  x = x1;
  y = y1;
}

/*
 *
 * ReceiveFromVision class for receiving
 *
*/

void ReceiveFromVision::Print()

{
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}

void ReceiveFromVision::Write(float x1, float y1)
{
  x = x1;
  y = y1;
}

/*
 *
 * SendToVision class for trasnmission
 *
*/

void SendToVision::Print()
{
  std::cout << "(x,y) = (" << x << ", " << y << ")" << std::endl;
}

void SendToVision::Write(float x1, float y1)
{
  x = x1;
  y = y1;
}

