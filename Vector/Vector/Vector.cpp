
#include "Vector.h"
#include <iostream>

using namespace std;

////////////////////////////////////////
////////constructor & destructor////////
template <class T>
Vector<T>::Vector()
{
    position = new T[3];
    setPosition(0, 0, 0);
}
template <class T>
Vector<T>::~Vector()
{
    try {
        delete[] position;
    } catch(exception& e) {
        
    }
}
//////////////////////////////////
////////Operator Overloads////////
template <class T>
Vector<T>& Vector<T>::operator=(const Vector& v)
{
    setPosition(v.getX(), v.getY(), v.getZ());
    
    return *this;
}

template <class T>
Vector<T>& Vector<T>::operator+(const Vector& right)
{
    Vector* output = new Vector;
    
    output->setX(this->position[0] + right.getX());
    output->setY(this->position[1] + right.getY());
    output->setZ(this->position[2] + right.getZ());
    return *output;
}

////////////////////////////////
////////Member Functions////////
template <class T>
bool Vector<T>::checkBounds(int n)
{
    return n < 3 && n >= 0;
}

template <class T>
void Vector<T>::setPosition(T x, T y, T z)
{
    position[0] = x;
    position[1] = y;
    position[2] = z;
}

template <class T>
void Vector<T>::printVector()
{
    // <x, y, z>
    cout << getX() << endl;
    cout << getY() << endl;
    cout << getZ() << endl;
}


template class Vector<int>;
template class Vector<char>;
template class Vector<float>;
template class Vector<double>;
