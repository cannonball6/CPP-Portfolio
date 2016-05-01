
#ifndef __Polynomial__Polynomial__
#define __Polynomial__Polynomial__


#include <iostream>
#include "Polynomial.h"
using namespace std;


class Polynomial{

public:
    /////////////////////////////////////////
    ////////Constructors & Destructor////////
    Polynomial();
    Polynomial(double coefficients[], int number);
    explicit Polynomial(double const_term);
    Polynomial(const Polynomial& rhs);
    ~Polynomial();
    
    ////////////////////////////////
    ////////Member Functions////////
    int degree() const { return size - 1; }
    void print(ostream & out = cout) const;
    

    
    ////////////////////////////////////
    ////////Assignment Operators////////
    Polynomial & operator= (const Polynomial& rhs);
    Polynomial & operator+= (const Polynomial& rhs);
    Polynomial & operator*= (double rhs);
    
    bool operator==(const Polynomial & rhs);
    
    ////////////////////////////////////
    ////////Overload Operators//////////
    
    Polynomial& operator+(const Polynomial & rhs);
    Polynomial& operator*(double rhs);
    
    
private:
    int size;       // size of the coefs array ( = degree + 1)
    double * coefs; // coefs will be an array
};



Polynomial operator*(double lhs, const Polynomial& rhs);

ostream& operator<<(ostream & out, const Polynomial& p);



#endif /* defined(__Polynomial__Polynomial__) */
