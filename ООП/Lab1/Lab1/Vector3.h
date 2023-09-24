#pragma once
#include "math.h"


class Vector3 {
private:
	double point1;
	double point2;
	double point3;
	double length;
public:
	Vector3();
	Vector3(double, double, double);
	double GetLength();
	Vector3 GetNormolized();
	double GetPoint1();
	double GetPoint2();
	double GetPoint3();
	Vector3 operator+ (Vector3);
	Vector3 operator- (Vector3);
	Vector3 operator* (int);
	bool operator== (Vector3);
	double operator^(Vector3);
	Vector3 GetCross(Vector3, Vector3);
};