// inverted triangle pattern
// 1111
// 222
// 33
// 4
#include <iostream>
using namespace std;

int main() {
int n = 4;
for (int i = 0; i < n; i++) {
    for (int j=0 ; j <i ; j++) { // i times spaces
        cout << " ";

    }
    for (int j=0 ; j < n-i ; j++) { // n-i times numbers
        cout << i+1;
    }
    cout << endl;
  
}
  return 0;
}