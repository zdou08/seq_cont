#include "my_array.h"

arrayClass::arrayClass(){
    cout << "Class Constructor" << endl;
}

void arrayClass::setArray(int position, int addNum) {
    ar[position] = addNum;
}

array<int,6> arrayClass::getArray() {
    return ar;
}

void arrayClass::clearPos(int position) {
    ar[position] = 0;
}

void arrayClass::clearVal() {
    int arraySize;
    arraySize = sizeof(ar)/sizeof(ar[0]);
    for(int i = 0; i < arraySize; ++i) {
        ar[i] = 0;
    }
}
