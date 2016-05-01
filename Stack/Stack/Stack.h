#include <cassert>
#include "Node.h"

template <class T>
class Stack{

public:
    ////Constructor & Destructor////
    Stack();
    ~Stack();
    ////Copy Constructor////
    Stack(const Stack<T>& s);
    
    //Functions
    void pushTop(T data);
    T popTop();
    void printStack();
    
    //Overloads
    Stack<T>& operator +(const Stack<T>& s);
    Stack<T>& operator +=(const Stack<T>& s);
    
    //getter
    int getSize();
    
    bool isEmpty();
    
private:
    Node<T>* top;
    int size;
    
};