#pragma once
#include <string>
#include <ctime>

using namespace std;
using namespace System;
class CustomArray
{
private:
	int* arr;
	int n;
public:
	CustomArray();
	CustomArray(int m);
	CustomArray(int* b, int m);
	CustomArray(const CustomArray& x);
	CustomArray& operator = (const CustomArray& x);
	~CustomArray();
	String^ Print();
	CustomArray& Scan(int);
	int& operator [] (int i);
	int FindKey(int key);
	CustomArray& operator += (int key);
	CustomArray operator + (int key);
	CustomArray& operator += (CustomArray);
	CustomArray operator + (CustomArray);
	CustomArray& operator -= (int key);
	CustomArray operator - (int key);
	CustomArray& DelPosEq(int pos);
	CustomArray DelPosNew(int pos);
	bool operator == (CustomArray);
	bool operator != (CustomArray);
	int Max();
	int Min();
	void Sorting();
};