

#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

#include "FHeap.hpp"
#include "FHeap.cpp"


int main()
{
    FibonachiHeap H;
    list<Node*> heap;
    H.Function(heap);
    return 0;
}

