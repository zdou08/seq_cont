//////////////////////////////////////////////
// array, vector, deque, forward_list, list //
//////////////////////////////////////////////

#include "my_class.h"

using namespace std;

int main (void) {
    cout << "working" << endl;

    int test1 = 5;

    seqContainer myClass(test1);
    myClass.setArray(test1);

    return 0;
}
