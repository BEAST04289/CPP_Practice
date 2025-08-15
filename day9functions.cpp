// we use function if we want to reuse code
// we use int as return type if we want to return a value
// we use void as return type if we don't want to return a value
#include <iostream>
using namespace std;
// function defination(we defined a function)
// only declaration/defining a function wont print anything
// we have to call the function in main or any other function
void printHello() { //we used void cuzz we don't want to return a value but only want to print hello world
    cout << "Hello World\n";
}
// if we want to print now we can call the function after its declaration
int main() {
    // function call/invocation
    printHello(); // this will call the function and print hello world
    // we can call the function multiple times
    printHello(); // this will call the function again and print hello world again
    // we can also call the function in a loop
    for (int i = 0; i < 3; i++) {
        printHello(); // this will call the function and print hello world
    }
    return 0;
}