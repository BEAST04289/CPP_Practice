#include <iostream>
using namespace std;

int main() {

    cout << "ENTER THE NUMBER TILL WHERE THE SUM SHOULD BE TAKEN: " ;
    int n;
    int sum = 0 ;
    cin >> n;
    for( int i=1 ; i<=n ; i++ ) {

        sum += i;

    }
        cout << " sum = " << sum << endl;
return 0;
}
 // int n= 5;
 // int sum = 0;
 // for(int i = 1; i <= n; i++) {
 // sum +=i;
 // if (i ==5) {
 // break; // this will break the loop when i is 5