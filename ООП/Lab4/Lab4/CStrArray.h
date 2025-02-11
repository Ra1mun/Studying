#pragma once
#include <iostream>
#include "�Str.h"
using namespace std;
class CStrArray {
private:
	bool sortByContent_;
	bool sortByLength_;
	CStr* arr_;
	int length_;
	
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