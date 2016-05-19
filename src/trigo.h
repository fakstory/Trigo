#pragma once
#include <stdlib.h>
#include <math.h>
#include <algorithm>


class trigo
{

private:

	void getAngle();
	//angle
	float *a1; 
	float *a2; 
	float *a3;
	//Position
	float xr;
	float yr;
	//Orientation
	float orientation ; 
	//Beacon detected
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;

public:
	trigo();
	~trigo();


};