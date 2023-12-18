#include "Diap.h"

void Diap::Calc(SBase& object)
{
    int number;
    int minNumber = INT_MAX;
    int maxNumber = INT_MIN;
    int count = 0;
    while ((number = object.Get()) >= 0) {
        if (number < minNumber) {
            minNumber = number;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
        count++;
    }
    std::cout << "Min Number: " << minNumber << std::endl;
    std::cout << "Max Number: " << maxNumber << std::endl;
    std::cout << "Count: " << count << std::endl;
}
