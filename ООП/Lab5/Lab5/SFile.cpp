#include "SFile.h"

int SFile::Get()
{
    string line;
    ifstream in;

    in.open("testfile.txt");
    if (in.is_open()) {
        while (getline(in, line)) {
            cout << line << endl;
        }
    }
    in.close();
}
