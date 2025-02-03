#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

using namespace std;

class seqContainer {

public:

seqContainer(int numUp);

void setArray(int arNum);
array <int,6> getArray();

//void setVector(int vecNum);
//void setDeque(int decNum);
//void setFwd(int fwdNum);
//void setList(int listNum);

//getVector();
//getDeque();
//getFwd();
//getList();

private:

vector<int> vec;
deque<int> deq;
forward_list<int> forList;
list<int> comList;

};

#endif
