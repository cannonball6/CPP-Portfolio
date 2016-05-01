#include <iostream>
#include "Queue.h"

using namespace std;


int main() {
 
    int amountA, inputA;
    Queue<int> q1;
    Queue<int> q2;
    
    cout << "Type in amount of items for first queue: ";
    cin >> amountA;
    
    while (amountA != 0){
        
        cout << "Type item to insert: " << endl;
        cin >> inputA;
        q1.enqueue(inputA);

        amountA--;
    }
    q1.printQ();
    
    q1.dequeue();
    
    q1.printQ();
    
    return 0;
}
