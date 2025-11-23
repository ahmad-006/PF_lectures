#include <iostream>
using namespace std;

int main() {
    int x;

    // Input
    cout << "Enter an integer value for x: ";
    cin >> x;

    // Prefix and Postfix Demonstration
    cout << "\nOriginal x: " << x << endl;

    // Prefix increment
    cout << "Prefix increment (++x): " << ++x << endl;  // x is incremented first, then used

    // Postfix increment
    cout << "Postfix increment (x++): " << x++ << endl; // current x used, then incremented
    cout << "After postfix increment, x = " << x << endl;

    // Prefix decrement
    cout << "Prefix decrement (--x): " << --x << endl;  // x is decremented first, then used

    // Postfix decrement
    cout << "Postfix decrement (x--): " << x-- << endl; // current x used, then decremented
    cout << "After postfix decrement, x = " << x << endl;
