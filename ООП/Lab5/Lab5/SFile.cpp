#include "SFile.h"

SFile::SFile(const std::string& filename)
{
    inputFile.open(filename);
}

SFile::~SFile()
{
    inputFile.close();
}

int SFile::Get()
{
    int number;
    if (inputFile >> number) {
        return number;
    }
    else {
        return -1; // Возвращаем отрицательное значение при достижении конца файла
    }
}


