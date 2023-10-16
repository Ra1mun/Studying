#include "Vector3.h"

Vector3::Vector3() {
	X = 0;
	Y = 0;
	Z = 0;
	length = 0;
}

Vector3::Vector3(double point1, double point2, double point3)
{
	this->X = point1;
	this->Y = point2;
	this->Z = point3;
	length = sqrt(pow(this->X, 2) + pow(this->Y, 2) + pow(this->Z, 2));
}

double Vector3::GetLength()
{
	return length;
}

Vector3 Vector3::GetNormolized()
{
	return Vector3(X / length, Y / length, Z / length);
}

double Vector3::GetPoint1()
{
	return X;
}

double Vector3::GetPoint2()
{
	return Y;
}

double Vector3::GetPoint3()
{
	return Z;
}

Vector3 Vector3::operator+(const Vector3& v2) const{
	return Vector3(X + v2.X, Y + v2.Y, Z + v2.Z);
}

Vector3 Vector3::operator*(int k)
{
	return Vector3(X * k, Y * k, Z * k);
}


Vector3 Vector3::operator-(Vector3 v2)
{
	return Vector3(X - v2.X, Y - v2.Y, Z - v2.Z);
}

bool Vector3::operator==(Vector3 v2)
{
	return X == v2.X && Y == v2.Y && Z == v2.Z;
}

double Vector3::operator^(Vector3 v2)
{
	return X*v2.Y + Y * v2.Y + Z * v2.Z;
}

Vector3 Vector3::GetCross(Vector3 a, Vector3 b)
{
	return Vector3(a.Y * b.Z - a.Z * b.Y,
		a.Z * b.X - a.X * b.Z,
		a.X * b.Y - a.Y * b.X);
}
double Vector3::GetMixed(Vector3 a, Vector3 b, Vector3 c) {
	return (a.X * b.Y * c.Z) + (a.Y * b.Z * c.X) + (a.Z * b.X * c.Y)
		- (a.Z * b.Y * c.X) - (a.Y * b.X * c.Z) - (a.X * b.Z * c.Y);
}


