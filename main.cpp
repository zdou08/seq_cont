//////////////////////////////////////////////
// array, vector, deque, forward_list, list //
//////////////////////////////////////////////

#include "my_class.h"

using namespace std;

int main (void) {
    cout << "Main" << endl;

    int test1 = 5;
    int arraySize = 0;

    seqContainer myClass(test1);

    // Array
    /*
    myClass.setArray(0,test1);

    array<int,6> testArray;
    testArray = myClass.getArray();

    arraySize = sizeof(testArray)/sizeof(testArray[0]);
    myClass.clearPos(0);
    testArray = myClass.getArray();
    */

    // Vector
    /*
    myClass.setVector(0,test1);
    vector<int> testVector;
    testVector = myClass.getVector();
    cout << "Vec 0: " << testVector[0] << endl;
    myClass.setVector(0,test1);
    testVector = myClass.getVector();
    cout << "New Vec 0: " << testVector[0] << endl;
    myClass.clearVecAll();
    testVector = myClass.getVector();
    cout << "Clear Vec 0: " << testVector[0] << endl;
    */
    
    // Deque
    myClass.setDeque(0,test1);

    return 0;
}
