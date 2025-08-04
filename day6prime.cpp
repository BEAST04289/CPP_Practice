#include <iostream>
using namespace std;
int main() {
    cout << "enter a number:";
    int n;
    cin >> n ;
    bool isPrime = true; // Assume n is prime initially
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false; // Found a divisor, so n is not prime
            break;
        }
    }
    if(isPrime == true) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}