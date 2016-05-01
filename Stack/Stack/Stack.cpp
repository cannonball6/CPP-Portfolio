#include "Stack.h"
#include <cassert>
using namespace std;

/////////////////////
/////Constructor/////
template <class T>
Stack<T>::Stack()
{
    top = NULL;
    size = 0;
}
////////////////////
/////Destructor/////
template <class T>
Stack<T>::~Stack(){
    
    while (!isEmpty()){
        popTop();
    }
}
//////////////////////////
/////Copy Constructor/////
template <class T>
Stack<T> ::Stack(const Stack<T>& s){
    
    //start iterator at head of the input stack
    Node<T> *iterator = s.top;
    
    while (iterator->next != NULL){
        iterator = iterator->next;
    }
    //push contents of the input stack into the output stack from bottom to top
    while (iterator != NULL){
        this->pushTop(iterator->data);
        iterator = iterator->prev;
    }
}
///////////////////////////
/////Member Functions//////
template <class T>
void Stack<T>::pushTop(T data){
    Node<T>* newNode = new Node<T>(data); //create new first
    if (isEmpty()){
        top = newNode;
    }
    else{
        newNode->next = top;
        top->prev = newNode;
        top = newNode;
    }
    size++;
}

template <class T>
T Stack<T>::popTop()
{
    //if stack is not empty, then remove last node
    assert(!isEmpty());
    T d = top->data;
    if (getSize() == 1)
    {
        delete top;
        top = NULL;
    }
    else {
        top = top->next;
        delete top->prev;
        top->prev = NULL;
    }
    size--;
    return d;
}

template <class T>
void Stack<T>::printStack(){
    Node<T>* iterator = this->top;
    //iterate through and print data until you reach NULL
    while (iterator != NULL){
        cout << iterator->data << endl;
        iterator = iterator->next;
    }
}
//////////////////////////////
/////////Overloads////////////

template <class T>
Stack<T>& Stack<T>::operator +(const Stack& s){
    Stack<T> *out = new Stack<T>(*this);
    
    Node<T>* iterator = s.top;
    
    while(iterator->next != NULL){
        iterator = iterator->next;
    }
    
    while (iterator != NULL){
        out->pushTop(iterator->data);
        iterator = iterator->prev;
    }

    return *out;
}

template <class T>
Stack<T>& Stack<T>::operator +=(const Stack<T>& s){
    
    Node<T>* iterator = s.top;
    //send pointer to end of stack
    while(iterator->next != NULL){
        iterator = iterator->next;
    }
    //lhs gets the rhs of stack in order
    while (iterator != NULL){
        this->pushTop(iterator->data);
        iterator = iterator->prev;
    }
    return *this;
    
}
//////////
//getter//
template <class T>
int Stack<T>::getSize()
{
    return size;
}
///////////////
//Empty Check//
template <class T>
bool Stack<T>::isEmpty()
{
    return (size == 0) ? true : false;
}



//Explicit Instantiations
template class Stack<int>;
template class Stack<int*>;
template class Stack<float>;
template class Stack<float*>;
