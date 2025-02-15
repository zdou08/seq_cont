#ifndef MY_DEQUE_H
#define MY_DEQUE_H

#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

class dequeClass {
public:

    dequeClass();

    void setDeque (int position, int addNum);
    deque<int> getDeque();

    void clearDeqPos(int position);
    void clearDeqAll();

private:
    int deqSize = 0;
    deque<int> deq;

};

#endif
