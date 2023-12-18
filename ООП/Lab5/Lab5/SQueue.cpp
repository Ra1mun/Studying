#include "SQueue.h"

SQueue::SQueue(int length)
{
    queue_ = new int[length];
    length_ = length;
    currentQueue_ = 0;
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
