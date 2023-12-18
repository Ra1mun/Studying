#include "ÑStr.h"

char* CStr::strGenerate(int length)
{
	if (length > 20) {
		length = 20;
	}
	if (length <= 0) {
		length = 1;
	}
	char* str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = 96 + rand() % 26;
	}
	str[length] = '/0';
	return str;
}

CStr::CStr()
{
	string = strGenerate(rand() % 21 + 1);
}

CStr::CStr(const char* str)
{
	int length = 0;
	while (str[length] != '/0') {
		length++;
	}
	string = new char[length + 1];
	for (int i = 0; i < length; i++) {
		string[i] = str[i];
	}
	string[length] = '/0';
}

CStr::CStr(int length)
{
	string = strGenerate(length);
}

CStr::CStr(const CStr& object)
{
	int length = object.GetLength();
	string = new char[length + 1];
	for (int i = 0; i < length; i++) {
		string[i] = object.string[i];
	}
	string[length] = '/0';
}

CStr::~CStr()
{
	delete[] string;
}

char& CStr::operator[](int index)
{
	if (index < 0) 
	{
		return string[0];
	}
	if (index > GetLength()) 
	{
		string[GetLength() - 1];
	}
	return string[index];
}

CStr& CStr::operator=(const CStr& object)
{
	if (this == &object)
		return *this;

	delete[] string;
	int length = object.GetLength();
	string = new char[length + 1];
	for (int i = 0; i < length; i++) {
		string[i] = object.string[i];
	}
	string[length] = '/0';
	return *this;
}

CStr& CStr::operator=(const char* str)
{
	CStr temp(str);
	if (this == &temp)
		return *this;

	delete[] string;
	int length = temp.GetLength();
	string = new char[length + 1];
	for (int i = 0; i < length; i++) {
		string[i] = temp.string[i];
	}
	string[length] = '/0';
	return *this;
}

bool CStr::operator>(CStr& object)
{
	for (int i = 0; i < GetLength(); i++) {
		if (string[i] > object[i]) {
			return true;
		}
		else if (string[i] < object[i]) {
			return false;
		}
		else {
			continue;
		}
	}
	return true;
}

bool CStr::operator<(CStr& object)
{
	return !(*this > object);
}

bool CStr::operator==(CStr& object)
{
	for (int i = 0; i < GetLength(); i++) {
		if (string[i] != object[i]) {
			return false;
		}
	}
	return true;
}

int CStr::GetLength() const
{
	int i = 0;
	while (string[i] != '/0') {
		i++;
	}
	return i;
}

ostream& operator<<(ostream& stream, CStr& object)
{
	for (int i = 0; i < object.GetLength(); i++) {
		stream << object[i];
	}

	return stream;
}
