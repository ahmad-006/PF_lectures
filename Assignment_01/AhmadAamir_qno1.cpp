#include <iostream>
using namespace std;

int main() {
    float a, b,c;

    // getting input from user
    cout << "Enter 3 Numbers: ";
    cin >> a >> b>>c;
 

    // Arithmetic operations

    //addition
    cout << "Addition (a + b): " << a + b << endl;
    //substraction
    cout << "Subtraction (a - b): " << a - b << endl;
    //multiplication
    cout << "Multiplication (a * b): " << a * b << endl;
    // Division 
    cout << "Division (a / b): " << a / b << endl;
        // Modulus with int 
    cout << "Modulus (a % b): " << int(a) % int(b) << endl;


    //operator precedence

    // Arithmetic expression without parentheses
    cout << "Expression a + b * c: " << a + b * c << endl;
    //Arithmetic expression with paranthesis
    cout << "Expression (a + b) * c: " << (a + b) * c << endl;

    return 0;
}
