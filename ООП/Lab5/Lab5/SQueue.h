#pragma once
#include "SBase.h"

class SQueue : public SBase {
private:
	int* queue;
	int length;
	int currentQueue;
public:
	SQueue(int length);
	int Get();
};