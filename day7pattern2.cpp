#include <iostream>
using namespace std;
int main() {
int n = 3;
int num = 1; // Fixed value for demonstration
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << num << " ";
        num++; // Increment number for next column
    }

    cout << endl;
}

    return 0;
}