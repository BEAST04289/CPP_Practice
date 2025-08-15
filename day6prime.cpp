#include <iostream>
using namespace std;
int main() {
    cout << "enter a number:";
    int n;
    cin >> n ;
    bool isPrime = true; // Assume n is prime initially
    for (int i = 2; i*i <= n; i++) {
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
}//from 1 to sqrtn the factors are unique after that they start repeating
// to prove prime or not prime we do not have to check till n-1
// we can check till sqrt(n) because if n is divisible by any number greater than its square root,
// it must also be divisible by a number smaller than its square root.
// i*i <= n