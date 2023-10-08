#include "CustomArray.h"


CustomArray::CustomArray()
{
	arr = new int[1]; n = 1;
}

CustomArray::CustomArray(int m)
{
	srand(time(nullptr));
	arr = new int[m]; n = m;
	for (int i = 0; i < m; i++)
	{
		arr[i] = 1 + rand() % 50;
	}
}

CustomArray::CustomArray(int* b, int m)
{
	arr = new int[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = b[i];
	}
	n = m;
}

CustomArray::CustomArray(const CustomArray& x)
{
	n = x.n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = x.arr[i];
	}
}

CustomArray& CustomArray::operator=(const CustomArray& x)
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

CustomArray::~CustomArray()
{
	delete[]arr;
}

String^ CustomArray::Print()
{	
	String^ text;
	for (int i = 0; i < n; i++)
		text += arr[i].ToString() + " ";
	return text;
}

CustomArray& CustomArray::Scan(int m)
{
	srand(time(nullptr));
	arr = new int[m]; n = m;
	for (int i = 0; i < m; i++)
	{
		arr[i] = 1 + rand() % 50;
	}
	return *this;
}

int& CustomArray::operator[](int i)
{
	if (i < 0)
		return arr[0];
	if (i > n)
		return arr[n - 1];
	return arr[i];
}

int CustomArray::FindKey(int key)
{
	int index{ -1 };

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] == key)
		{
			index = i;
			break;
		}
	}
	
	return index;
}

CustomArray& CustomArray::operator+=(int key)
{
	int* t;
	t = new int[n + 1];
	for (int i = 0; i < n; i++)
		t[i] = arr[i];
	t[n] = key;
	delete []arr;
	arr = t;
	n++;
	return *this;
}

CustomArray CustomArray::operator+(int key)
{
	CustomArray Res(n + 1);
	for (int i = 0; i < n; i++)
		Res.arr[i] = arr[i];
	Res.arr[n] = key;
	return Res;
}

CustomArray& CustomArray::operator+=(CustomArray copyArray)
{
	int* t;
	t = new int[n + copyArray.n];
	for (int i = 0; i < n; i++)
		t[i] = arr[i];
	for (int i = 0; i < n; i++)
		t[n + i] = copyArray.arr[i];
	delete[]arr;
	arr = t;
	n = n + copyArray.n;
	return *this;
}

CustomArray CustomArray::operator+(CustomArray copyArray)
{
	CustomArray Res(n + copyArray.n);
	for (int i = 0; i < n; i++)
		Res.arr[i] = arr[i];
	for (int i = 0; i < n; i++)
		Res[n + i] = copyArray.arr[i];
	return Res;
}

CustomArray& CustomArray::operator-=(int key)
{
	int deleteIndex = FindKey(key);
	if (deleteIndex == -1)
		return *this;

	int* t;
	t = new int[n - 1];
	for (int i = 0; i < deleteIndex; i++)
		t[i] = arr[i];
	for (int i = deleteIndex + 1; i < n; i++)
		t[i - 1] = arr[i];
	delete[]arr;
	arr = t;
	n--;
	return *this;
}

CustomArray CustomArray::operator-(int key)
{
	int deleteIndex = FindKey(key);
	if (deleteIndex == NULL)
		return CustomArray();

	CustomArray Res(n - 1);
	for (int i = 0; i < deleteIndex; i++)
		Res.arr[i] = arr[i];
	for (int i = deleteIndex + 1; i < n; i++)
		Res.arr[i - 1] = arr[i];
	return Res;
}

CustomArray& CustomArray::DelPosEq(int pos)
{
	if (pos < 0)
		return CustomArray();

	if (pos > n)
		return *this;

	int* t;
	t = new int[n - 1];
	for (int i = 0; i < pos - 1; i++)
		t[i] = arr[i];
	for (int i = pos; i < n; i++)
		t[i - 1] = arr[i];

	delete[]arr;
	arr = t;
	n--;
	return *this;
}

CustomArray CustomArray::DelPosNew(int pos)
{
	if (pos < 0)
		return CustomArray();

	if (pos > n)
		return *this;

	CustomArray Res(n - 1);
	for (int i = 0; i < pos - 1; i++)
		Res.arr[i] = arr[i];
	for (int i = pos; i < n; i++)
		Res.arr[i - 1] = arr[i];

	return Res;
}

bool CustomArray::operator==(CustomArray copyArray)
{
	if (n != copyArray.n)
		return false;

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] != copyArray.arr[i])
			return false;
	}
	return true;
}

bool CustomArray::operator!=(CustomArray copyArray)
{
	if (n != copyArray.n)
		return true;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != copyArray.arr[i])
			return true;
	}
	return false;
}

int CustomArray::Max()
{
	int max = arr[0];
	for(int i = 1; i < n; i++) 
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int CustomArray::Min()
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

void CustomArray::Sorting()
{
	int temp{};
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j]) 
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

