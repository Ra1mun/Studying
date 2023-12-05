#include <string>
#include <time.h>
#include <iostream>

using namespace std;
template <typename T>
class Array
{
private:
	T* arr;
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
	void Print() const;
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

template<typename T>
Array<T>::Array()
{
	arr = nullptr;
	n = 0;
}
template<typename T>
Array<T>::Array(int m)
{
	n = m;
	arr = new T[n];
}

template<typename T>
Array<T>::Array(T* b, int m)
{
	n = m;
	arr = new T[n];
	for (int i = 0; i < n; i++)
		arr[i] = b[i];
}
template<typename T>
Array<T>::Array(const Array<T>& x)
{
	n = x.n;
	arr = new T[n];
	for (int i = 0; i < n; i++)
		arr[i] = x.arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& x)
{
	if (this == &x)
		return *this;

	delete[]arr;
	n = x.n;
	arr = new T[n];
	for (int i = 0; i < n; i++)
		arr[i] = x.arr[i];
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete[]arr;
}

template<typename T>
T& Array<T>::operator[](int i)
{
	if (i < 0)
		return arr[0];
	if (i > n)
		return arr[n - 1];
	return arr[i];
}

template<typename T>
void Array<T>::Scan(int m)
{
	n = m;
	arr = new T[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

template<typename T>
void Array<T>::Print() const
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

template<typename T>
int Array<T>::FindKey(T key)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == key)
			return i;

	return -1;
}

template<typename T>
Array<T>& Array<T>::operator+=(T key)
{
	T* t;
	t = new T[n + 1];
	for (int i = 0; i < n; i++)
		t[i] = arr[i];
	t[n] = key;
	delete[]arr;
	arr = t;
	n++;
	return *this;
}

template<typename T>
Array<T> Array<T>::operator+(T key)
{
	Array Res(arr, n + 1);
	Res += key;
	return Res;
}

template<typename T>
Array<T>& Array<T>::operator+=(Array copyArray)
{
	T* t;
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

template<typename T>
Array<T> Array<T>::operator+(Array copyArray)
{
	Array Res(n);
	Res += copyArray;
	return Res;
}

template<typename T>
Array<T>& Array<T>::operator-=(T key)
{
	return DelPosEq(FindKey(key));
}

template<typename T>
Array<T> Array<T>::operator-(T key)
{
	return DelPosNew(FindKey(key));
}

template<typename T>
Array<T>& Array<T>::DelPosEq(int pos)
{
	if (pos > n || pos < 0)
		return *this;

	T* t;
	t = new T[n - 1];
	for (int i = 0; i < pos - 1; i++)
		t[i] = arr[i];
	for (int i = pos; i < n; i++)
		t[i - 1] = arr[i];

	delete[]arr;
	arr = t;
	n--;
	return *this;
}

template<typename T>
Array<T> Array<T>::DelPosNew(int pos)
{
	if (pos > n || pos < 0)
		return *this;

	Array Res(n - 1);
	for (int i = 0; i < pos - 1; i++)
		Res.arr[i] = arr[i];
	for (int i = pos; i < n; i++)
		Res.arr[i - 1] = arr[i];

	return Res;
}

template<typename T>
bool Array<T>::operator==(Array copyArray)
{
	if (n != copyArray.n)
		return false;
	for (int i = 0; i < n; i++)
		if (arr[i] != copyArray.arr[i])
			return false;

	return true;
}

template<typename T>
bool Array<T>::operator!=(Array copyArray)
{
	if (n != copyArray.n)
		return true;
	for (int i = 0; i < n; i++)
		if (arr[i] != copyArray.arr[i])
			return true;

	return false;
}

template<typename T>
int Array<T>::Max()
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template<typename T>
int Array<T>::Min()
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

template<typename T>
void Array<T>::Sorting()
{
	T temp{};
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

template<typename T>
ostream& operator<<(ostream& r, Array<T>& x)
{
	for (int i = 0; i < x.n; i++) {
		r << x.a[i] << " ";
	}
	return r;

}

template<typename T>
istream& operator>>(istream& r, Array<T>& x)
{
	cout << "Введите количество элементов в массиве: ";
	r >> x.n;
	x.a = new T[x.n];
	for (int i = 0; i < x.n; i++) {
		cout << "Введите элемент " << i << ": ";
		r >> x.a[i];
	}
	return r;

}

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "RUSSIAN");
#pragma region Test1
    cout << "Test 1:" << endl;
    cout << "String:" << endl;
    Array<string> stringArray;
    stringArray.Scan(5);
    stringArray.Print();

    cout << "Float:" << endl;
    Array<float> floatArray;
    floatArray.Scan(5);
    floatArray.Print();

    cout << "Int:" << endl;
    Array<int> intArray;
    intArray.Scan(5);
    intArray.Print();
#pragma endregion
#pragma region Test2
    cout << "Test 2:" << endl;
    cout << "String:" << endl;
    Array<string> copyStringArray(stringArray);
    cout << copyStringArray << endl;
    cout << "Float:" << endl;
    Array<float> copyFloatArray(floatArray);
    cout << copyFloatArray << endl;
    cout << "Int:" << endl;
    Array<int> copyIntArray(intArray);
    cout << copyIntArray << endl;
#pragma endregion
#pragma region Test3
    cout << "Test 3:" << endl;
    cout << "String:" << endl;
    cout << (stringArray == copyStringArray) << endl;
    cout << "Float:" << endl;
    cout << (floatArray == copyFloatArray) << endl;
    cout << "Int:" << endl;
    cout << (intArray == copyIntArray) << endl;
#pragma endregion
#pragma region Test4
    cout << "Test 4:" << endl;
    cout << "string:" << endl;
    stringArray += "mas";
    stringArray.Print();
    cout << (stringArray == copyStringArray) << endl;
    cout << "float:" << endl;
    floatArray += 6.12f;
    floatArray.Print();
    cout << (floatArray == copyFloatArray) << endl;
    cout << "integer:" << endl;
    intArray += 6;
    intArray.Print();
    cout << (intArray == copyIntArray) << endl;
#pragma endregion
#pragma region Test5
    cout << "Test 5:" << endl;

    cout << "String:" << endl;
    Array<string> functionStringArray = stringArray + "gg";
    functionStringArray.Print();

    cout << "Float:" << endl;
    Array<float> functionFloatArray = floatArray + 1.2345f;
    functionFloatArray.Print();

    cout << "Int:" << endl;
    Array<int> functionIntArray = intArray + 69;
    functionIntArray.Print();
    cout << "Float: " << endl;
    functionFloatArray.DelPosEq(0);
    functionFloatArray.Print();
    cout << "Int:" << endl;
    functionIntArray.DelPosEq(0);
    functionIntArray.Print();
#pragma endregion
#pragma region Test6
    cout << "Test 6: " << endl;
    cout << "Float:" << endl;
    floatArray.Sorting();
    floatArray.Print();
    cout << "Integer:" << endl;
    intArray.Sorting();
    intArray.Print();
#pragma endregion
}
