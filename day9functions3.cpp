  #include <iostream>
  using namespace std;
 //sum of 2 numbers using a function
  int add(int a, int b) {
    int s = a+b;
      return s;
  }
  // min of 2 nos
  int min(int a, int b) {
    if (a < b) {
        return a;
      }  else {
            return b;
        }
    }
    // sum of 1 - n numbers 
   int sumN(int n) {
    int sum = 0;
    for (int i=1; i<=n ; i++) {
        sum+=i; 
    }
    return sum;
   }
   // calculate n factorial
    int factorialN(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
    }
 // calculate sum of digits of a number 
  int sumDigits(int n) {
    int num = 0;
    while ( n > 0 ) {
      int lastDigit = n % 10;
      n /= 10;
      num += lastDigit;
    }
    return num;
  }
  // calculate nCr binomial cofefficient
    int factorial (int n) {
      int fact = 1;  
      for ( int i=1; i<=n; i++) {
        fact *=i;
      }
      return fact;
    }
    int nCr(int n, int r) {
      int factr = factorial(r);
      int factn = factorial(n);
      int factnmr = factorial(n-r);
      return factn/(factr*factnmr);

    }
   /*   int num1, num2;
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;

      int sum = add(num1, num2);
      cout << "The sum is: " << sum << endl; */

 int main() {
   /* cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "The minimum is: " << min(num1, num2) << endl;*/


 /* cout << sumN(5) << endl;
 cout << sumN(10) << endl;*/
 
 int n = 8 , r =2;
  cout << nCr(n,r) << endl ;
  
    return 0;
 }