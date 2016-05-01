#include "Polynomial.h"
#include <iostream>

using namespace std;

int main() {
    
    double a[] = {1.1, 2.2, 3.3, 4.4};
    Polynomial p1(a, 4);
    Polynomial p2(p1);
    cout << "Constructors: " << endl;
    cout << "p1 is " << p1 << endl << "p2 is " << p2 << endl;
    
    double num = 3.0;
    Polynomial p3 = p1 * num;
    p1 += p3;
    cout << "Overloaded Operators: " << endl;
    cout << "p3 is " << p3 << endl;
    cout << "p1 += p3 is " << p1 << endl << "p2 is " << p2 << endl;
    
    cout << endl << "Introducing new array: " << endl;
    double a4[] = {3, 3, 3, 3, 3};
    Polynomial p4(a4, 5);
    cout << "p4: " << p4 << endl;
    p4 += Polynomial(8);
    cout << endl << "p4 after sending it a double: " << endl << p4 << endl;
    
    cout << endl << "Introducing p5 receiving p4 * 0.5 " << endl;
    Polynomial p5 = p4 * 0.5;
    Polynomial p6 = 4 * p5;
    cout << "p5: " << p5 << endl;
    cout << endl << "Introducing p6 receiving 4 * p5 " << endl;
    cout << "p6: " << p6 << endl;
    
    cout << "Testing bool assignments: if p4 is equal to p4 then show equal" << endl << "and" << "if p4 is equal to p6 then show equal " << endl;
    if (p4 == p4)
        cout << "p4 == p4" << endl;
    if (p4 == p6)
        cout << "p4 == p6" << endl;
    
    return 0;
}
