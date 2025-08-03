#include <iostream>
using namespace std;

int main() {
   int count = 1;
   while (count <=5) {
    cout << count << " "; // This will print 1 2 3 4 5 on the same line
    // If you want to print each number on a new line, you can use:;
    // cout << count ; with this result will be 12345....cout << count << endl; // with this result will be 1 2 3 4 5 on next line 
    count++;
   }

   cout << endl; /
   return 0; 
}