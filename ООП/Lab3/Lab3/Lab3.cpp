#include <iostream>
#include "Array.h"

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "RUSSIAN");
#pragma region Test1
    cout << "Test 1:" << endl;
    cout << "String:" << endl;
    Array<string> stringArray;
    stringArray.Scan(5);
    stringArray.Print();

    cout << "Float:" << endl;
    Array<float> floatArray;
    floatArray.Scan(5);
    floatArray.Print();

    cout << "Int:" << endl;
    Array<int> intArray;
    intArray.Scan(5);
    intArray.Print();
#pragma endregion
#pragma region Test2
    cout << "Test 2:" << endl;
    cout << "String:" << endl;
    Array<string> copyStringArray(stringArray);
    cout << copyStringArray << endl;
    cout << "Float:" << endl;
    Array<float> copyFloatArray(floatArray);
    cout << copyFloatArray << endl;
    cout << "Int:" << endl;
    Array<int> copyIntArray(intArray);
    cout << copyIntArray << endl;
#pragma endregion
#pragma region Test3
    cout << "Test 3:" << endl;
    cout << "String:" << endl;
    cout << (stringArray == copyStringArray) << endl;
    cout << "Float:" << endl;
    cout << (floatArray == copyFloatArray) << endl;
    cout << "Int:" << endl;
    cout << (intArray == copyIntArray) << endl;
#pragma endregion
#pragma region Test4
    cout << "Test 4:" << endl;
    cout << "string:" << endl;
    stringArray += "mas";
    stringArray.Print();
    cout << (stringArray == copyStringArray) << endl;
    cout << "float:" << endl;
    floatArray += 6.12;
    floatArray.Print();
    cout << (floatArray == copyFloatArray) << endl;
    cout << "integer:" << endl;
    intArray += 6;
    intArray.Print();
    cout << (intArray == copyIntArray) << endl;
#pragma endregion
#pragma region Test5
    cout << "Test 5:" << endl;

    cout << "String:" << endl;
    Array<string> functionStringArray = stringArray + "gg";
    functionStringArray.Print();

    cout << "Float:" << endl;
    Array<float> functionFloatArray = floatArray + 1.2345f;
    functionFloatArray.Print();

    cout << "Int:" << endl;
    Array<int> functionIntArray = intArray + 69;
    functionIntArray.Print();

    functionFloatArray.DelPosEq(0);
    functionFloatArray.Print();
    cout << "integer:" << endl;
    functionIntArray.DelPosEq(0);
    functionIntArray.Print();
#pragma endregion
#pragma region Test6
    cout << "Test 6: " << endl;
    cout << "Float:" << endl;
    floatArray.Sorting();
    floatArray.Print();
    cout << "Integer:" << endl;
    intArray.Sorting();
    intArray.Print();
#pragma endregion
}