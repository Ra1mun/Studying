#include "Vector3.h"

Vector3::Vector3() {
	point1 = 0;
	point2 = 0;
	point3 = 0;
	length = 0;
}

Vector3::Vector3(const double point1 = 0, const double point2 = 0, const double point3 = 0)
{
	this->point1 = point1;
	this->point2 = point2;
	this->point3 = point3;
	length = sqrt(pow(this->point1, 2) + pow(this->point2, 2) + pow(this->point3, 2));
}

double Vector3::GetLength()
{
	return length;
}

Vector3 Vector3::GetNormolized()
{
	return Vector3(point1 / length, point2 / length, point3 / length);
}

double Vector3::OutPutPoint1()
{
	return point1;
}

double Vector3::OutPutPoint2()
{
	return point2;
}

double Vector3::OutPutPoint3()
{
	return point3;
}


