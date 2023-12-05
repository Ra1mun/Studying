#include "ÑStr.h"

char* CStr::strGenerate(int length)
{
	string = new char[length];
	for (int i = 0; i < length; i++) {
		string[i] = char(rand() % 26 + 0x61);
	}
}

CStr::CStr()
{
	strGenerate(rand() % 21 + 1);
}

CStr::CStr(char* str)
{
	strcpy(string, str);
}

CStr::CStr(int length)
{
	strGenerate(length);
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
	delete[] string;

	string = object.string;
}

CStr& CStr::operator=(char* str)
{
	delete[] string;

	string = str;
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
	}
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
	strlen(string);
}

ostream& operator<<(ostream& stream, CStr& object)
{
	for (int i = 0; i < object.GetLength(); i++) {
		stream << object[i];
	}

	return stream;
}
