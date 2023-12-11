#include "CStrArray.h"

CStrArray::CStrArray(int length)
{
    arr = new CStr[length];
    this->length = length;
}

CStrArray::~CStrArray()
{
    delete[] arr;
}

CStr& CStrArray::operator[](int index)
{
    if (index < 0)
    {
        return arr[0];
    }
    if (index > length)
    {
        arr[length - 1];
    }
    return arr[index];
}

void CStrArray::sotr_by_content()
{
    CStr temp;
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length - 1; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    sortByContent = true;
    sortByLength = false;
}

void CStrArray::sort_by_length()
{
    CStr temp;
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length - 1; j++) {
            if (arr[j].GetLength() > arr[i].GetLength()) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    sortByLength = true;
    sortByContent = false;
}

int CStrArray::bin_search(char* str)
{
    int left = 0;
    int right = length - 1;
    CStr temp(str);
    while (left <= right) {
        int m = left + (right - left) / 2;
        if (arr[m] == temp)
            return m;
        if (arr[m] > temp)
            right = m - 1;
        else
            left = m + 1;
            
    }
    return -1;
}

int CStrArray::bin_search(CStr& object)
{
    int left = 0;
    int right = length - 1;
    while (left <= right) {
        int m = left + (right - left) / 2;
        if (arr[m] == object)
            return m;
        if (arr[m] > object)
            right = m - 1;
        else
            left = m + 1;

    }
    return -1;
}

bool CStrArray::check_sort()
{
    if (sortByContent) {
        for (int i = 0; i < length; i++) {
            if (arr[i] > arr[i + 1]) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
    if (sortByLength) {
        for (int i = 0; i < length; i++) {
            if (arr[i].GetLength() > arr[i + 1].GetLength()) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }

    return false;
}

ostream& operator<<(ostream& stream, CStrArray& object)
{
    if (object.length > 50) {
        stream << "Строка слишком большая";
        return stream;
    }

    for (int i = 0; i < object.length; i++) {
        stream << object[i];
    }

    return stream;
}
