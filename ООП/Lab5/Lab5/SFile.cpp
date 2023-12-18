#include "SFile.h"

SFile::SFile(const char* filename)
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
        return -1;
    }
}


