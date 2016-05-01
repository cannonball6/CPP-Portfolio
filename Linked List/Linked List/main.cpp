//
//  main.cpp
//  Linked List
//
//  Created by Lindley P Cannon Jr on 11/17/15.
//  Copyright (c) 2015 LindleyP. All rights reserved.
//

#include <iostream>
#include "List.h"
using namespace std;

int main() {
    
    int item, num;
    char select;
    
    List<int> list;
    
    cout << "Welcome to the Linked List.  Please add an item to your List: " << endl;
    cin >> item;
    list.pushFront(item);
    
    //cin >> num;
    bool playing = true;
    while (playing) {
    
        cout << "What do you want to do with your next item? 1.)pushFront or 2.)pushBack  3.)print"  << endl;
        cout << "press 'q' to quit?" << endl;
        
        
        cin >> select;
        switch (select) {
            case '1':
                cout << "Type your insertion" << endl;
                cin >> num;
                list.pushFront(num);
                break;
                
            case '2':
                cout << "Type your insertion" << endl;
                cin >> num;
                list.pushBack(num);
                break;
            case '3':
                list.printList();
                break;
            case 'q':
                playing = false;
                break;
            default:
                break;
        }
        select = 0;
    }
    
    return 0;
}
