#ifndef __Queue__Queue__
#define __Queue__Queue__

#include <stdio.h>
#include "Node.h"

template <class T>
class Queue{

public:
    void reset();
    void enqueue(T data); //or "enqueue"
    void pushFront(T data); //dequeue and list only
    T dequeue(); //or "dequeue"
    T popBack(); //dequeue and list only
    
    int getSize();
    bool isEmpty();
    void printQ();
    
    Queue();
    ~Queue();
    
private:
    enum {EMPTY = -1};
    Node<T>* front;
    Node<T>* rear;
    int size;
    
};

#endif /* defined(__Queue__Queue__) */
