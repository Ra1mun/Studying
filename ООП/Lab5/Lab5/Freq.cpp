#include "Freq.h"

void Freq::Calc(SBase& object)
{
    int number;
    sum = 0;
    while ((number = object.Get()) >= 0) {
        counts[number]++;
        sum += number;
    }
}


ostream& operator<<(ostream& stream, Freq& object)
{
    for (const auto& pair : object.counts) {
        stream << pair.first << ": " << pair.second << std::endl;
    }
    stream << "Sum: " << object.sum << std::endl;
    return stream;
}
