#include "trigo.h"

trigo::trigo()
{

}

trigo::~trigo()
{

}

void trigo::getAngle()
{
	*a1 = atan2((y1 - yr), (x1 - xr)) - orientation;
	*a2 = atan2((y2 - yr), (x2 - xr)) - orientation;
	*a3 = atan2((y3 - yr), (x3 - xr)) - orientation;
}
