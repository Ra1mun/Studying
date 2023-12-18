#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "SBase.h"

using namespace std;
class SFile : public SBase {
private:
    std::ifstream inputFile; // ����� ��� ������ �� �����
public:
    SFile(const std::string& filename);

    ~SFile();
    int Get() override;
};