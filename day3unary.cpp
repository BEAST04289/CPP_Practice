#include <iostream>
using namespace std;
// unary operators require only a single number as an operand
int main() {
    int a = 5;
//a++ and a-- means pehle kaam karenge fir update whereas ++a and --a  means pehle update karenge fir kaam karenge
    // Unary operators
  
int b = a++; // kaam fir update
    cout << "Value of b: " << b << endl; // Output: 5
    cout << "Value of a: " << a << endl; // Output: 6

    return 0;
}