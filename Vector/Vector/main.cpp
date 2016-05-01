#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
    
    Vector<int> A;
    Vector<int> B;
    Vector<int> C;
    
    
    A.setPosition(1.0, 2.0, 3.0);
    B.setPosition(2.0, 3.0, 4.0);
    
    C = A + B;
    
    cout << "printing A: " << endl;
    A.printVector();
    cout << "printing B: " << endl;
    B.printVector();
    cout << "printing A + B:" << endl;
    C.printVector();
    
    
    return 0;
}
