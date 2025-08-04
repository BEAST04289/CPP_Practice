 #include <iostream>
 using namespace std ;
 
 int main () {
    int n = 50;
    int count=1;
    while ( count <=n ) {
    cout << count << " ";
    count++; // without this result will not be 1 2 3 4 ... but will be 1 1 1 1 ... now cuz it is a comment now infinitely
    }
    cout << endl ;
    return 0 ;
 } 