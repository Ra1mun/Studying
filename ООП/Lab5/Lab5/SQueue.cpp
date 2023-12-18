#include "SQueue.h"
#include <iostream>
int* SQueue::generateArray(int length)
{
    int* result = new int[length];
    for (int i = 0; i < length; i++) {
        result[i] = rand() % 50;
    }
    length_ = length;
    currentQueue_ = 0;
    return result;
}

SQueue::SQueue(int length)
{
    queue_ = generateArray(length);
}

int SQueue::Get()
{
    if(currentQueue_ == length_ - 1){
        return -1;
    }
    int result = queue_[currentQueue_];
    currentQueue_++;
    return result;
}
