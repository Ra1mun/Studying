#include "Vector3.h"


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

double Vector3::GetNormolized()
{
	return 0.0f;
}

Vector3 Vector3::operator+=(Vector3)
{
	return Vector3();
}

Vector3 Vector3::operator-=(Vector3)
{
	return Vector3();
}

Vector3 Vector3::operator*=(int)
{
	return Vector3();
}

Vector3 Vector3::operator==(Vector3)
{
	return Vector3();
}

Vector3 Vector3::operator^=(Vector3)
{
	return Vector3();
}

Vector3 Vector3::GetCross(Vector3, Vector3)
{
	return Vector3();
}

Vector3 Vector3::GetTriple(Vector3, Vector3, Vector3)
{
	return Vector3();
}

