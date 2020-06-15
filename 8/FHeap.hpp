

#ifndef FHeap_hpp
#define FHeap_hpp

#include <stdio.h>
#include <list>

using namespace std;

struct Node
{
    int data, degree;
    Node *child, *sibling, *parent;
};

struct Node* mini = NULL;

class FibonachiHeap{
public:
    Node* newNode(int key);
    list<Node*> insert(list<Node*> _head, int key, bool Union);
    void Function(list<Node*> heap);
    Node* mergeBinomialTrees(Node *b1, Node *b2);
    list<Node*> adjust(list<Node*> _heap);
    list<Node*> unionBionomialHeap(list<Node*> l1, list<Node*> l2);
    list<Node*> insertATreeInHeap(list<Node*> _heap, Node *tree, bool Union);
    list<Node*> UnionHeap(list<Node*> _heap);
    list<Node*> removeMinFromTreeReturnBHeap(Node *tree);
    Node* getMin(list<Node*> _heap);
    list<Node*> DeleteMin(list<Node*> _heap);
    void printTree(Node *h);
    void printHeap(list<Node*> _heap);
    bool Continue();
};



#endif /* FHeap_hpp */
