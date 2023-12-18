#include "CStrArray.h"

CStrArray::CStrArray(int length)
{
    arr_ = new CStr[length];
    length_ = length;
}

CStrArray::~CStrArray()
{
    delete[] arr_;
}

CStr& CStrArray::operator[](int index)
{
    if (index < 0)
    {
        return arr_[0];
    }
    if (index > length_)
    {
        arr_[length_ - 1];
    }
    return arr_[index];
}

void CStrArray::sotr_by_content()
{
    CStr temp;
    for (int i = 0; i < length_; i++) {
        for (int j = i; j < length_ - 1; j++) {
            if (arr_[j] > arr_[i]) {
                temp = arr_[j];
                arr_[j] = arr_[i];
                arr_[i] = temp;
            }
        }
    }
    sortByContent_ = true;
    sortByLength_ = false;
}

void CStrArray::sort_by_length()
{
    CStr temp;
    for (int i = 0; i < length_; i++) {
        for (int j = i; j < length_ - 1; j++) {
            if (arr_[j].GetLength() > arr_[i].GetLength()) {
                temp = arr_[j];
                arr_[j] = arr_[i];
                arr_[i] = temp;
            }
        }
    }
    
    sortByLength_ = true;
    sortByContent_ = false;
}

int CStrArray::bin_search(const char* str)
{
    if (sortByLength_) {
        return -1;
    }
    int left = 0;
    int right = length_ - 1;
    CStr temp(str);
    while (left <= right) {
        int m = left + (right - left) / 2;
        if (arr_[m] == temp)
            return m;
        if (arr_[m] > temp)
            right = m - 1;
        else
            left = m + 1;
            
    }
    return -1;
}

int CStrArray::bin_search(CStr& object)
{
    if (sortByLength_) {
        return -1;
    }
    int left = 0;
    int right = length_ - 1;
    while (left <= right) {
        int m = left + (right - left) / 2;
        if (arr_[m] == object)
            return m;
        if (arr_[m] > object)
            right = m - 1;
        else
            left = m + 1;

    }
    return -1;
}

bool CStrArray::check_sort()
{
    if (sortByContent_) {
        for (int i = 0; i < length_; i++) {
            if (arr_[i] > arr_[i + 1]) {
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
    if (sortByLength_) {
        for (int i = 0; i < length_; i++) {
            if (arr_[i].GetLength() > arr_[i + 1].GetLength()) {
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
    if (object.length_ > 50) {
        stream << "Строка слишком большая";
        return stream;
    }

    for (int i = 0; i < object.length_; i++) {
        stream << object[i];
    }

    return stream;
}
