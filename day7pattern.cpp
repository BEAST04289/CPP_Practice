#include <iostream>
using namespace std;

int main() {
    int n = 10; // Number of rows

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i; // Character for the current row

        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
// Output:
// A    
// B B
// C C C
// D D D D