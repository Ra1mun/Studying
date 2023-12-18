#include "SKbrd.h"

int SKbrd::Get()
{
    int number;
    std::cin >> number;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
        return -1; // ¬озвращаем отрицательное значение при завершении ввода с клавиатуры
    }
    return number;
}
