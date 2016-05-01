#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    
      Complex c1(1, 2);	//Testing constructor with arguments
    Complex c2(c1);	//Testing copy constructor
    Complex c3 = c2;	//Testing assignment operator
    Complex c4(2, 4);
    //Test equivalence operator to see if the above operations worked
    if (c1 == c2 && c2 == c3){
        //Test the output operator
        cout << "Testing the output operator" << endl;
        cout << "All are equal: (c1 == c2 && c2 == c3)" << endl;
        cout << endl << "c1:" << c1 << ", c2:" << c2 << ", c3:" << c3 << "\n\n";
    }
    //Testing addition and subtraction
    c1 += c2;	//Testing += operator overload
    c3 -= c2;	//Testing -= operator overload
    cout << "c1 += c2, c3 -= c2" << endl;
    cout << "c1:" << c1 << ", c2:" << c2 << ", c3:" << c3 << "\n\n";
    c3 = c1 + c2;	//Testing + operator overload
    c1 = c3 - c1;	//Testing - operator overload
    cout << "c3 = c1 + c2, c1 = c3 - c1" << endl;
    cout << "c1:" << c1 << ", c2:" << c2 << ", c3:" << c3 << endl;
    //Reset values (constructor w/ args, as well as assignment)
    cout << endl << "resetting values....." << endl;
    c1 = Complex(1, 2);
    c2 = Complex(1, 2);
    c3 = Complex(1, 2);
    //Testing multiplication and division
    c1 *= c2;	//Testing *= operator overload
    c3 /= c2;	//Testing /= operator overload
    cout << "c1 *= c2, c3 /= c2" << endl;
    cout << "c1:" << c1 << ", c2:" << c2 << ", c3:" << c3 << "\n\n";
    c3 = c1 * c2;	//Testing * operator overload
    c1 = c3 / c1;	//Testing / operator overload
    cout << "c3 = c1 * c2" << endl << "c1 = c3 / c1" << endl;
    cout << "c1:" << c1 << ", c2:" << c2 << ", c3:" << c3 << "\n\n";
    
    
    system("pause");
    
    return 0;


}
