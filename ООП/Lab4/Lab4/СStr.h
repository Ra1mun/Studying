#pragma once
#include <iostream>
#include <time.h>

using namespace std;
class CStr {
private:
	char* string;
	char* strGenerate(int legnth);
public:
	CStr();
	CStr(const char* str);
	CStr(int length);
	CStr(const CStr& object);
	~CStr();
	char& operator[](int index);
	CStr& operator=(const CStr& object);
	CStr& operator=(const char *str);
	bool operator>(CStr& object);
	bool operator ==(CStr& object);
	int GetLength();
	friend ostream& operator<<(ostream& stream, CStr& object);
};