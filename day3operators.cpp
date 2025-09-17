//like in maths a+b or a-b is there...so operators are +- * / % etc
#include <iostream>
using namespace std;    
//ARITHMETIC OPERATORS
//these are binary operators they require 2 numbers that are a and b
// +, -, *, /, %
int main() {
int a = 5, b = 10;
int sum = a + b;
cout << "SUM: " << sum << endl;
//either "SUM: " << sum << endl; or cout << "SUM: " << a+b<< endl;
cout << "DIFFERENCE: " << (b - a) << endl;
cout << "PRODUCT: " << (a * b) << endl;
cout << "QUOTIENT: " << (b / a) << endl;
cout << "REMAINDER: " << (b % a) << endl;
cout << (5/2) << endl; // This will output 2, as it performs integer division
return 0;
}
//if different data types are used, it will give different results
//for example, if we use float or double, it will give decimal values ie. 2.5,
// who's size is bigger agar 1 byte ie. int and float 4 bytes so float mein answer ayega