// Write a program that checks whether a student has passed or failed.
// a. Pass condition: marks ≥ 50.


#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if(marks>50){
        cout << "Student has passed  :)" << endl;
    }else{
        cout << "Student has failed  :(" << endl;
    }

    return 0;
}