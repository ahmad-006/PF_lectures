//Write a C++ program to check whether a given number is even or odd using a
// comparison operator.


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Write an integar :" ;
    cin >> num;

    if(num %2 != 0){
        cout << "the number is odd" << endl;
    }else{
         cout << "the number is even" << endl;
    }
    return 0;
}