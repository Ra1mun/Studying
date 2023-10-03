#include "Array.h"

Array::Array()
{
	arr = new int[1]; n = 1;
}

Array::Array(int m)
{
	srand(time(nullptr));
	arr = new int[m]; n = m;
	for (int i = 0; i < m; i++)
	{
		arr[i] = 1 + rand() % 51;
	}
}

Array::Array(int* b, int m)
{
	arr = new int[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = b[i];
	}
	n = m;
}

Array::Array(const Array& x)
{
	n = x.n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = x.arr[i];
	}
}

Array& Array::operator=(const Array& x)
{
	if (this != &x)
	{
		delete []arr;
		n = x.n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = x.arr[i];
		}
	}
	return *this;
}

Array::~Array()
{
	delete[]arr;
}

string Array::Print()
{
	string text = "";
	for (int i = 0; i < n; i++)
		text += to_string(arr[i]);
	return text;
}

int& Array::operator[](int i)
{
	// TODO: вставьте здесь оператор return
}

int Array::FindKey(int key)
{
	return 0;
}

Array& Array::operator+=(int key)
{
	// TODO: вставьте здесь оператор return
}

Array Array::operator+(int key)
{
	return Array();
}

Array& Array::operator+=(Array)
{
	// TODO: вставьте здесь оператор return
}

Array Array::operator+(Array)
{
	return Array();
}

Array& Array::operator-=(int key)
{
	// TODO: вставьте здесь оператор return
}

Array Array::operator-(int key)
{
	return Array();
}

Array& Array::DelPosEq(int pos)
{
	// TODO: вставьте здесь оператор return
}

Array Array::DelPosNew(int pos)
{
	return Array();
}

bool Array::operator==(Array)
{
	return false;
}

bool Array::operator!=(Array)
{
	return false;
}

int Array::Max()
{
	return 0;
}

int Array::Min()
{
	return 0;
}

void Array::Sorting()
{
}
