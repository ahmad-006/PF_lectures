//  Input an age and check if the person is eligible for voting. (Use logical AND to
// ensure age is between 18 and 100).


#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter you age: ";
    cin >> age;


    if(age >= 18 && age <=100){
        cout << "You are eligible for voting";
    }else{
        cout << "You are not eligible for voting";
    }
    return 0;
}