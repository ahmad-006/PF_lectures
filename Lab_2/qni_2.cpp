// Take two integers from the user and print the larger number using an if-else
// statement.


#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two integers :";
    cin >> firstNumber >> secondNumber;

    if(firstNumber> secondNumber){
        cout << "First Number is greater than the Second Number";
    }else{
        cout << "Second Number is greater than the First Number";
        
    }
    return 0;
}