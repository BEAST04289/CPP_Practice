// pyramid pattern 
// ---1|    we divided it into 2 parts
// --12|1
// -123|21
#include <iostream>
using namespace std;

int main() { // 3 loops lageneg 1st for spaces 2nd for num 1 and 3rd for num 2
    int n=4;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) { //spaces = n-i-1
            cout << " ";
        }
        for (int j=1; j<=i + 1; j++) { // num 1
            cout << j;
        }
        for (int j=i; j>0; j--) { // num 2
            cout << j;
        }
        cout << endl;
    }
return 0;
}