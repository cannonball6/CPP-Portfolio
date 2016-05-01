
#include "Queue.h"
#include <cassert>
using namespace std;

////////////////////////////////////////
////////Constructor & Destructor////////
template <class T>
Queue<T>::Queue()
{
    front = NULL;
    rear = NULL;
    size = 0;
}
template <class T>
Queue<T>::~Queue(){
    reset();
}
////////////////////////////////
////////Member Functions////////
template <class T>
void Queue<T>::reset(){
    while (!isEmpty()){
        dequeue();
    }
}
template <class T>
void Queue<T>::enqueue(T data){
    Node<T>* newNode = new Node<T>(data);

    if (isEmpty()){
        front = newNode;
    }
    else{
        rear->prev = newNode;
        newNode->next = rear;
    }
    rear = newNode;
    
    size++;
}
template <class T>
T Queue<T>::dequeue()
{
    if (isEmpty())
    {
        cerr << "Your Queue is Empty" << endl;
    }
    assert(!isEmpty());
    
    T d = front->data;
    if (getSize() == 1)
    {
        delete front;
        front = rear =  NULL;
    }
    else {
        front = front->prev;
        delete front->next;
        front->next = NULL;
    }
    size--;
    return d;
}
template <class T>
int Queue<T>::getSize()
{
    return size;
}

template <class T>
bool Queue<T>::isEmpty()
{
    return (size == 0) ? true : false;
}

template <class T>
void Queue<T>::printQ(){
    Node<T>* iterator = front;
    
    cout << "Printing Queue from Front to Back: " << endl;
    while (iterator != NULL){
        cout << iterator->data << endl;
        iterator = iterator->prev;
    }
}

template class Queue<int>;
template class Queue<int*>;
template class Queue<float>;
template class Queue<float*>;

