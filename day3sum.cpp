#include <iostream>
using namespace std;

int main() {
   int a, b ;
   cout << "ENTER A: ";
    cin >> a; 
    cout << "ENTER B: ";
    cin >> b;
    int sum = a + b;
    cout << "SUM: " << sum << endl;
    cout << "DIFFERENCE: " << (b - a) << endl;
    cout << "PRODUCT: " << (a * b) << endl;
    cout << "QUOTIENT: " << (b / a) << endl;
    cout << "REMAINDER: " << (b % a) << endl;
    return 0;
}
