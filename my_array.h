#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include "my_class.h"

class arrayClass {
public:
    void addVal (int position, int addNum);
    void clearVal (int position);

private:
    array<int,6> ar;

};

#endif
