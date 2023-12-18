#include "SKbrd.h"

int SKbrd::Get()
{
    int number;
    cin >> number;
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        return -1; // ¬озвращаем отрицательное значение при завершении ввода с клавиатуры
    }
    return number;
}
