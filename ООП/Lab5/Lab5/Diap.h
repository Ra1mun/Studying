#pragma once
#include "Freq.h"

class Diap : public Freq {
private:
	int min_, max_, count_;
public:
	void Calc(SBase& container);
	friend ostream& operator<<(ostream& stream, Diap& object);
};