#include "CStrArray.h"

int main()
{
	srand(time(nullptr));
	CStr string1(20);
	cout << string1 << endl;
	CStr copyString(string1);
	cout << copyString << endl;
	if (string1 == copyString) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	CStr string2(21);
	if (string1 > string2) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	CStrArray array1(5);
	cout << array1 << endl;
	array1.sotr_by_content();
	cout << array1 << endl;
	if (array1.bin_search(string1) != -1) {
		cout << string1 << endl;
	}
	else{
		cout << "Элемент не найден" << endl;
	}
}
