#include "my_deque.h"

dequeClass::dequeClass(){
    cout << "Deque Constructor" << endl;
}

void dequeClass::setDeque(int position, int addNum) {
    deqSize = deq.size();
    if (position < deqSize) {
        cout << "Not empty" << endl;
        deq.at(position) = addNum;
        deqSize = deq.size();
        cout << "size of deque: " << deq.size() << endl;
    } else if (position == deqSize) {
        deq.push_back(addNum);
        deqSize = deq.size();
        cout << "size of deque: " << deq.size() << endl;
    } else {
        cout << "Position does NOT exist in Deque." << endl;
        cout << "Max Position: " << deq.size() << endl;
    }
}

deque<int> dequeClass::getDeque() {
    return deq;
}

void dequeClass::clearDeqPos(int position) {
    deq[position] = 0;
    deqSize = deq.size();
    if (position < deqSize) {
        cout << "Not empty" << endl;
        deq[position] = 0;
        cout << "size of deque: " << deq.max_size() << endl;
    } else {
        cout << "Position does NOT exist in Deque." << endl;
        cout << "Max Position: " << deq.size() << endl;
    }

}

void dequeClass::clearDeqAll() {
    deq.clear();
    deq.push_back(0);
}
