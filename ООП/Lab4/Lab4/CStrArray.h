#pragma once
#include <iostream>
#include "ÑStr.h"
using namespace std;
class CStrArray {
private:
	bool sortByContent;
	bool sortByLength;
	CStr* arr;
	int length;
	
public:
	CStrArray(int length);
	~CStrArray();
	CStr& operator[](int index);
	void sotr_by_content();
	void sort_by_length();
	int bin_search(const char* str);
	int bin_search(CStr& object);
	bool check_sort();
	friend ostream& operator<<(ostream& stream, CStrArray& object);
};