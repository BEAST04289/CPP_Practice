#include <iostream>
using namespace std;
// itteration means to repeat a process
int main() { 
//       noob way to print 5 stars in one line
//  for( int i = 1; i<=5; i++) {
//     cout << "*****" << endl;
//  }
//         single line mein x stars
// int x = 50; // no of stars
// for (int i = 0; i < x; i++) {
//     cout << "*";
// }
// cout << endl;
int n = 5;
int m = 10;
for (int i = 0; i <n; i++) { //no of lines
// bahar wala loop controls kitna lines hona chahiye 
//andar wala decide karta kitne stars hona chahiye
for (int j = 0; j <m; j++) {
    cout << "*" ;
}
cout << endl;
}
     return 0;
}