#pragma once
#include <string>
#include <ctime>

using namespace std;
using namespace System;
class Array
{
private:
	int* arr;
	int n;
public:
	Array();
	Array(int m);
	Array(int* b, int m);
	Array(const Array& x);
	Array& operator = (const Array& x);
	~Array();
	String^ Print();
	Array& Scan(int);
	int& operator [] (int i);
	int FindKey(int key);
	Array& operator += (int key);
	Array operator + (int key);
	Array& operator += (Array);
	Array operator + (Array);
	Array& operator -= (int key);
	Array operator - (int key);
	Array& DelPosEq(int pos);
	Array DelPosNew(int pos);
	bool operator == (Array);
	bool operator != (Array);
	int Max();
	int Min();
	void Sorting();
};