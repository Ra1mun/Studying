#pragma once
#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
	T *arr;
	int n;
public:
	Array();
	Array(int m);
	Array(T* b, int m);
	Array(const Array& x);
	Array& operator = (const Array& x);
	~Array();
	T& operator [] (int i);
	void Scan(int m);
	void Print();
	int FindKey(T);
	Array& operator += (T);
	Array operator + (T);
	Array& operator += (Array);
	Array operator + (Array);
	Array& operator -= (T);
	Array operator - (T);
	Array& DelPosEq(int pos);
	Array DelPosNew(int pos);
	bool operator == (Array);
	bool operator != (Array);
	int Max();
	int Min();
	void Sorting();

	friend ostream& operator<<(ostream& r, Array& x);
	friend istream& operator>>(istream& r, Array& x);
};
#include "Array.cpp"