#include "Complex.h"
using namespace std;


////////////////////////////
////////Constructor////////
Complex::Complex(float a, float ib)
{
    real = a;
    imag = ib;
}
////////////////////////////////
////////Copy Constructor////////
Complex::Complex(const Complex& c)
{
    *this = c;
}

////////////////////////////////////
////////Assignment Overloads////////
Complex& Complex::operator = (const Complex& c)
{
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}

Complex& Complex::operator += (const Complex& c)
{
    this->real += c.real;
    this->imag += c.imag;
    return *this;
}

Complex& Complex::operator -= (const Complex& c)
{
    this->real -= c.real;
    this->imag -= c.imag;
    return *this;
}

Complex& Complex::operator *= (const Complex& c)
{
    float thisReal = this->real;
    this->real = (thisReal * c.real) - (this->imag * c.imag);
    this->imag = (thisReal * c.imag) + (this->imag * c.real);
    return *this;
}

Complex& Complex::operator /= (const Complex& c)
{
    float denominator = (c.real * c.real) + (c.imag * c.imag);
    float thisReal = this->real;
    this->real = ((thisReal * c.real) + (this->imag * c.imag)) / denominator;
    this->imag = ((this->imag * c.real) - (thisReal * c.imag)) / denominator;
    return *this;
}

//////////////////////////////////
////////Operator Overloads////////
Complex Complex::operator + (const Complex& c)
{
    Complex *output = new Complex;
    output->real = this->real + c.real;
    output->imag = this->imag + c.imag;
    return *output;
}

Complex Complex::operator - (const Complex& c)
{
    Complex *output = new Complex;
    output->real = this->real - c.real;
    output->imag = this->imag - c.imag;
    return *output;
}

Complex Complex::operator * (const Complex& c)
{
    Complex *output = new Complex;
    output->real = (this->real * c.real) - (this->imag * c.imag);
    output->imag = (this->real * c.imag) + (this->imag * c.real);
    return *output;
}

Complex Complex::operator / (const Complex& c)
{
    float denominator = (c.real * c.real) + (c.imag * c.imag);
    Complex *output = new Complex;
    output->real = ((this->real * c.real) + (this->imag * c.imag)) / denominator;
    output->imag = ((this->imag * c.real) - (this->real * c.imag)) / denominator;
    return *output;
}

bool Complex::operator == (const Complex& c)
{
    if (this->real == c.real && this->imag == c.imag){
        //		if (){
        return true;
        //		}
    }
    return false;
}

bool Complex::operator < (const Complex& c)
{
    if (this->real < c.real && this->imag < c.imag){
        return true;
    }
    return false;
}

bool Complex::operator >(const Complex& c)
{
    return !(*this < c);
}

bool Complex::operator <= (const Complex& c)
{
    return (*this < c || *this == c);
}

bool Complex::operator >= (const Complex& c)
{
    return (*this > c || *this == c);
}

