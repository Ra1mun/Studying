#include "Vector3.h"

Vector3::Vector3() {
	point1 = 0;
	point2 = 0;
	point3 = 0;
	length = 0;
}

Vector3::Vector3(double point1, double point2, double point3)
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

double Vector3::GetPoint1()
{
	return point1;
}

double Vector3::GetPoint2()
{
	return point2;
}

double Vector3::GetPoint3()
{
	return point3;
}

Vector3 Vector3::operator+(Vector3 v2) {
	return Vector3(point1 + v2.point1, point2 + v2.point2, point3 + v2.point3);
}

Vector3 Vector3::operator*(int k)
{
	return Vector3(point1 * k, point2 * k, point3 * k);
}


Vector3 Vector3::operator-(Vector3 v2)
{
	return Vector3(point1 - v2.point1, point2 - v2.point2, point3 - v2.point3);
}

bool Vector3::operator==(Vector3 v2)
{
	return point1 == v2.point1 && point2 == v2.point2 && point3 == v2.point3;
}

double Vector3::operator^(Vector3 v2)
{
	return point1*v2.point2 + point2 * v2.point2 + point3 * v2.point3;
}

Vector3 Vector3::GetCross(Vector3 a, Vector3 b)
{
	return Vector3(a.point2 * b.point3 - a.point3 * b.point2,
		a.point3 * b.point1 - a.point1 * b.point3,
		a.point1 * b.point2 - a.point2 * b.point1);
}
double Vector3::GetMixed(Vector3 a, Vector3 b, Vector3 c) {
	return (a.point1 * b.point2 * c.point3) + (a.point2 * b.point3 * c.point1) + (a.point3 * b.point1 * c.point2)
		- (a.point3 * b.point2 * c.point1) - (a.point2 * b.point1 * c.point3) - (a.point1 * b.point3 * c.point2);
}


