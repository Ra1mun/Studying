#include "Freq.h"

void Freq::Calc(SBase& object)
{
    int number;
    sum_ = 0;
    while ((number = object.Get()) != -1) {
        counts_[number]++;
        sum_ += number;
    }
}


ostream& operator<<(ostream& stream, Freq& object)
{
    for (const auto& pair : object.counts_) {
        stream << pair.first << ": " << pair.second << endl;
    }
    stream << "Sum: " << object.sum_ << endl;
    stream << "-----------" << endl;
    return stream;
}
