#ifndef Stack___Queue_Node_h
#define Stack___Queue_Node_h

#include <iostream>

//Node class containing 2 constructors:
//one default, one that takes 1 argument

template <class T>
class Node{
public:
    T data;
    Node<T>* next;
    Node<T>* prev;
    
    Node(){
        data = 0;
        next = prev = NULL;
    }
    Node(T d)
    {
        data = d;
        next = prev = NULL;
    }
};



#endif

