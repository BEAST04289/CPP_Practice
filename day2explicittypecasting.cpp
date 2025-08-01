#include <iostream>
using namespace std;
//explicit typecasting(casting) converts bigger data type to smaller data type
// Example of explicit typecasting: conversion from double to int
int main() {
    double price = 9.78;
    int newPrice = (int)price;  
    cout << newPrice << endl; // prints 9
    return 0;
}   