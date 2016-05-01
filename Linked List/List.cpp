#include "List.h"
#include <iostream>
#include <cassert>

using namespace std;

////////////////////////////////////////
////////Constructor & Destructor////////
template <class T>
List<T>::List()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

template <class T>
List<T>::~List(){
    
    if (!isEmpty()){
        popFront();
    }
}

////////////////////////////////
////////Member Functions////////

template <class T>
void List<T>::pushBack(T data){
    Node<T>* newNode = new Node<T>();
    newNode->data = data;
    if (isEmpty()){
        
        head = newNode;
    }
    else{
        tail->prev = newNode;
        newNode->next = tail;
    }
    tail = newNode;
    
    size++;
}

template <class T>
void List<T>::pushFront(T data){
    Node<T>* newNode = new Node<T>();
    newNode->data = data;
    if (isEmpty()){
        
        tail = newNode;
    }
    else{
        newNode->prev = head;
        head->next = newNode;
    }
    head = newNode;
    size++;
}

template <class T>
T List<T>::popFront()
{
    assert(!isEmpty());
    if (isEmpty())
    {
        cerr << "Your List is Empty" << endl;
        return 0;
    }
    
    T d = head->data;
    if (getSize() == 1)
    {
        delete head;
        head = tail =  NULL;
    }
    else {
        head = head->prev;
        delete head->next;
        head->next = NULL;
    }
    size--;
    return d;
}

template <class T>
T List<T>::popBack()
{
    assert(!isEmpty());
    if (isEmpty())
    {
        cerr << "Your List is Empty" << endl;
        return 0;
    }
    T d = tail->data;
    if (getSize() == 1)
    {
        delete tail;
        head = tail =  NULL;
    }
    else {
        
        tail = tail->next;
        delete tail->prev;
        tail->prev = NULL;
    }
    size--;
    return d;
}

template <class T>
int List<T>::printList()
{
    Node<T>* temp = head;
    T d = temp->data;
    while (temp != NULL)
    {
        cout << "--> " << d << endl;
        temp = temp->prev;
        if (temp == NULL)
            return 0;
        else
            d = temp->data;
        
    }
    return 0;
}

template <class T>
void List<T>::reset(){
    while (size != 0)
        popFront();
}

template <class T>
int List<T>::getSize()
{
    return size;
}

template <class T>
bool List<T>::isEmpty()
{
    return (size == 0) ? true : false;
}


//implicit instantiation
template class List<int>;
template class List<int*>;
template class List<float>;
template class List<float*>;
template class List<double>;
template class List<double*>;
template class List<char>;
template class List<char*>;