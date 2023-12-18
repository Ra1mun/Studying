#include "SQueue.h"
#include "SKbrd.h"
#include "SFile.h"
#include "Diap.h"
#include <ctime>

int main()
{
	srand(time(nullptr));

	SFile fileReader1("data.txt");
	SQueue queueReader1(20);
	SKbrd keyboardReader;

	Freq freq1;
	Freq freq2;
	Freq freq3;
	freq1.Calc(fileReader1);
	freq2.Calc(queueReader1);
	freq3.Calc(keyboardReader);

	cout << freq1;
	cout << freq2;
	cout << freq3;

	SQueue queueReader2(20);
	SFile fileReader2("data.txt");
	Diap diap1;
	Diap diap2;
	Diap diap3;
	diap1.Calc(fileReader2);
	diap2.Calc(queueReader2);
	diap3.Calc(keyboardReader);

	cout << diap1;
	cout << diap2;
	cout << diap3;
}
