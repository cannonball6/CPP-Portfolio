//
//  Node.h
//  Linked List
//
//  Created by Lindley P Cannon Jr on 11/17/15.
//  Copyright (c) 2015 LindleyP. All rights reserved.
//

#ifndef Linked_List__Node_h
#define Linked_List__Node_h

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
