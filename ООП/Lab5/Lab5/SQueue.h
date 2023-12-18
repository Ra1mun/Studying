#pragma once
#include "SBase.h"

class SQueue : public SBase {
private:
	int* queue_;
	int length_;
	int currentQueue_;
	int* generateArray(int length);
public:
	SQueue(int length);
	int Get() override;
};