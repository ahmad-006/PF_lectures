#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 5;
    int c = 2;

    int resultOne = a + b *c;
    int resultTwo = (a + b) * c;

    cout << "The Answer of 10 + 5 * 2 is : "  << resultOne << endl;
    cout << "The Answer of (10 + 5) * 2 is : "<< resultTwo << endl;

    return 0;
}