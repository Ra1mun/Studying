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
		str[i] = 97 + rand() % 26;
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
	int i = 0;
	while (str[i] != '/0') {
		i++;
	}

	strcpy_s(string, i, str);
}

CStr::CStr(int length)
{
	string = strGenerate(length);
}

CStr::CStr(const CStr& object)
{
	string = object.string;
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
	string = object.string;
	return *this;
}

CStr& CStr::operator=(const char* str)
{
	CStr temp(str);
	if (this == &temp)
		return *this;

	delete[] string;
	string = temp.string;
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

bool CStr::operator==(CStr& object)
{
	for (int i = 0; i < GetLength(); i++) {
		if (string[i] != object[i]) {
			return false;
		}
	}
	return true;
}

int CStr::GetLength()
{
	return strlen(string);
}

ostream& operator<<(ostream& stream, CStr& object)
{
	for (int i = 0; i < object.GetLength(); i++) {
		stream << object[i];
	}

	return stream;
}
