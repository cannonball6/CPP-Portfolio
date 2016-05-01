#ifndef __Complex_Numbers__Complex__
#define __Complex_Numbers__Complex__

#include <stdio.h>
#include <iostream>

class Complex{
public:
    //////////////////////////////////////////
    ////////Constructors & Destructors////////
    Complex(){ real = imag = 0.0; }
    Complex(float a, float ib);
    Complex(const Complex& c);
    ~Complex(){}

    /////////////////////////////////
    ////////Getters & Setters////////
    float getReal(){ return real; }
    float getImag(){ return imag; }
    void setReal(int a){ real = a; }
    void setImag(int b){ imag = b; }
    
    ////////////////////////////////////
    ////////Assignment Overloads////////
    
    Complex& operator = (const Complex& c);
    Complex& operator += (const Complex& c);
    Complex& operator -= (const Complex& c);
    Complex& operator *= (const Complex& c);
    Complex& operator /= (const Complex& c);
    
    //////////////////////////////////
    ////////Operator Overloads////////
    
    Complex operator + (const Complex& c);
    Complex operator - (const Complex& c);
    Complex operator * (const Complex& c);
    Complex operator / (const Complex& c);
    
    friend std::ostream& operator << (std::ostream& o, const Complex& c){o << "(" << c.real << " + " << c.imag << ")";
        return o;}
    
    bool operator == (const Complex& c);
    bool operator < (const Complex& c);
    bool operator > (const Complex& c);
    bool operator <= (const Complex& c);
    bool operator >= (const Complex& c);

    
private:
    double real; // num, real part
    double imag; // num * i, imaginary part
};


#endif /* defined(__Complex_Numbers__Complex__) */
