#include "my_vector.h"

vectorClass::vectorClass(){
    cout << "Vector Constructor" << endl;
}

void vectorClass::setVector(int position, int addNum) {
    vecSize = vec.size();
    if (position < vecSize) {
        cout << "Not empty" << endl;
        vec.at(position) = addNum;
        vecSize = vec.size();
        cout << "size of vector: " << vec.size() << endl;
    } else if (position == vecSize) {
        vec.push_back(addNum);
        vecSize = vec.size();
        cout << "size of vector: " << vec.size() << endl;
    } else {
        cout << "Position does NOT exist in Vector." << endl;
        cout << "Max Position: " << vec.size() << endl;
    }
}

vector<int> vectorClass::getVector() {
    return vec;
}

void vectorClass::clearVecPos(int position) {
    vec[position] = 0;
    vecSize = vec.size();
    if (position < vecSize) {
        cout << "Not empty" << endl;
        vec[position] = 0;
        cout << "size of vector: " << vec.max_size() << endl;
    } else {
        cout << "Position does NOT exist in Vector." << endl;
        cout << "Max Position: " << vec.size() << endl;
    }

}

void vectorClass::clearVecAll() {
    vec.clear();
    vec.push_back(0);
}
