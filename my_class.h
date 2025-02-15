#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>

#include "my_array.h"
#include "my_vector.h"

using namespace std;

class seqContainer: public arrayClass, public vectorClass 
{

public:

seqContainer(int numUp);

//void setDeque(int decNum);
//void setFwd(int fwdNum);
//void setList(int listNum);

//getDeque();
//getFwd();
//getList();

private:

deque<int> deq;
forward_list<int> forList;
list<int> comList;

};

#endif
