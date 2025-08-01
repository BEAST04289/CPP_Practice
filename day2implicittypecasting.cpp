// Typecasting in C++
// Typecasting is the conversion of one data type into another.
// There are two types of typecasting in C++: implicit and explicit.
// Implicit typecasting(conversion) is done by the compiler automatically, while explicit typecasting is done by the programmer using static_cast, dynamic_cast, const_cast, or reinterpret_cast.
// Example of implicit typecasting:coversion from float to double ie. 4 bytes in 8 bytes (small to big) char to int 
#include <iostream>
using namespace std;
// Implicit typecasting example
// Here, the character 'A' is implicitly converted to its ASCII value (65) when
int main() {
 char grade = 'A'; // character variable
 int value = grade; // implicit typecasting from char to int
 cout << value << endl; // prints ASCII value of 'A' which is 65
    return 0;
}