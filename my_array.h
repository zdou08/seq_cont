#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include <iostream>
#include <array>
#include <cstring>

using namespace std;

class arrayClass {
public:

    arrayClass();

    void setArray (int position, int addNum);
    array<int,6> getArray();

    void clearPos(int position);
    void clearVal();

private:
    int arrSize = 0;
    array<int,6> ar;

};

#endif
