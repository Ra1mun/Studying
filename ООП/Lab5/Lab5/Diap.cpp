#include "Diap.h"

void Diap::Calc(SBase& object)
{
    int number;
    max_ = INT_MIN;
    min_ = INT_MAX;
    count_ = 0;
    while ((number = object.Get()) != -1) {
        if (number < min_) {
            min_ = number;
        }
        if (number > max_) {
            max_ = number;
        }
        count_++;
    }
}

ostream& operator<<(ostream& stream, Diap& object)
{
    stream << "Min Number: " << object.min_ << endl;
    stream << "Max Number: " << object.max_ << endl;
    stream << "Count: " << object.count_ << endl;
    stream << "--------" << endl;
    return stream;
}
