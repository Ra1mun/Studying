#pragma once
#include "Freq.h"

class Diap : public Freq {
private:
	int min, max, sum;
public:
	Diap();
	void Calc(SBase* object);
	friend ostream operator<<(ostream& stream, Diap& object);
};