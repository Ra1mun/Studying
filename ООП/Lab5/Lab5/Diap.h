#pragma once
#include "Freq.h"

class Diap : public Freq {
private:
	int min, max, sum;
public:
	void Calc(SBase& object);
};