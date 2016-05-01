#include <iostream>
using namespace std;

int factorial(int number);
int findN(int number);

int main(){
    
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << factorial(number);
    findN(number);
    cout << endl;
    return 0;
    
}



int factorial(int number)
{
    int fact = number;
    if (number == 1)
        return 1;
    else
        return fact * factorial(number - 1);
}

int findN(int number)
{
    if (1 == number){
        cout << number << endl;
        return 1;
    }
    else{
        cout << number << endl;
        return findN(number - 1);

    }
}
