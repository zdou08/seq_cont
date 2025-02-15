#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class vectorClass {
public:

    vectorClass();

    void setVector (int position, int addNum);
    vector<int> getVector();

    void clearVecPos(int position);
    void clearVecAll();

private:
    int vecSize = 0;
    vector<int> vec;

};

#endif
