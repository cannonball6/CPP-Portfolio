#include <iostream>
#include "Stack.h"
#include <ctime>


using namespace std;

int main()
{
    int amountA, amountB, inputA, inputB;
    Stack<int> s1;
    Stack<int> s2;
    Stack<int> s3;
    Stack<int> s4;
    
    cout << "Type in amount of items for first stack: ";
    cin >> amountA;
    
    while (amountA != 0){
        
        cout << "Type item to insert: " << endl;
        cin >> inputA;
        s1.pushTop(inputA);
        amountA--;
    }
    
    cout << "Now, type in amount of items for second stack: ";
    cin >> amountB;
    
    while (amountB != 0) {
        cout << "Type item to insert: " << endl;
        cin >> inputB;
        s2.pushTop(inputB);
        amountB--;
    }
    
    cout << "Printing first Stack: " << endl;
    s1.printStack();
    cout << "Printing second stack: " << endl;
    s2.printStack();
    
    cout << "adding the two stacks together and printing from top of the stack: " << endl;
    s3 = s1 + s2;
    s3.printStack();
    
    cout << "next one at you" << endl;
    s2 += s1;
    
    s2.printStack();
    
}

