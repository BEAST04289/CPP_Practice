#include <iostream>
using namespace std;
 int main () {
    //i=0 so j should be i+1 so prints 1 star in 1st line
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "*";

        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
 }