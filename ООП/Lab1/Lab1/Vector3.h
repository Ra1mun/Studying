#pragma once
#include "math.h"

using namespace std;

class Vector3 {
private:
	double point1;
	double point2;
	double point3;
	double length;
public:
	Vector3();
	Vector3(const double, const double, const double);
	double GetLength();
	Vector3 GetNormolized();
	Vector3 operator+= (Vector3);
	Vector3 operator-= (Vector3);
	Vector3 operator*= (int);
	Vector3 operator== (Vector3);
	Vector3 operator^= (Vector3);
	Vector3 GetCross(Vector3, Vector3);
	Vector3 GetTriple(Vector3, Vector3, Vector3);
};