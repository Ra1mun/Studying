#pragma once

using namespace std;

class Vector3 {
private:
	float point1;
	float point2;
	float point3;
	float length;
public:
	Vector3();
	Vector3(float point1, float point2, float point3);
	void Input();
	void OutPut();
	float GetLength();
	float GetNormolized();
	Vector3 operator += (Vector3);
	Vector3 operator -= (Vector3);
	Vector3 operator *= (int);
	Vector3 operator == (Vector3);
	Vector3 operator *= (Vector3);
	Vector3 operator * (Vector3, Vecotor3);
	Vector3 operator *= (Vector3, Vector3);
};