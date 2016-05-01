#ifndef Linked_List_List_h
#define Linked_List_List_h

#include "Node.h"


template <class T>
class List{
    
public:
    ////////////////////////////////////////
    ////////Constructor & Destructor////////
    List();
    ~List();
    
    ////////////////////////////////
    ////////Member Functions////////
    void pushBack(T data);
    void pushFront(T data);
    T popFront();
    T popBack();
    
    
    int printList();
    void reset();
    int getSize();
    bool isEmpty();
    
private:
    unsigned int size;
    Node<T>* head;
    Node<T>* tail;
    
};

#endif /* defined(__Linked_List__List__) */
