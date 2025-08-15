// hollow diamond pattern
//   *  
//  * * 
// *   *
// ------ break down into 2 parts
//  * * 
//   * 
//    
//     
#include <iostream>
using namespace std;

int main () {
    //from top 1st spaces then star then spaces then a star
    int n=4;
    for (int i=0; i<n; i++) { 
        //spaces
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << "*"; // star
        if (i !=0) { // to avoid printing spaces and star in the first row
    
            for (int j=0; j<2*i-1; j++) { // spaces in between
                cout << " ";
            }
            cout << "*"; // star at the end
        }
        cout << endl;
    }
    // bottom n-1 lines
    for (int i=0; i<n-1; i++) {
        //spaces
       for (int j =0; j<i+1; j++) {
        cout << " "; // spaces
       }
       cout << "*"; // star

        // for spaces in between  2*(n-2-i)- 1
        if(i !=n-2) { // to avoid printing spaces and star in the last row
            for (int j=0; j<2*(n-2-i)-1; j++) {
                cout << " "; // spaces in between
            }
            cout << "*"; // star at the end
        }
        cout << endl;
    }
    return 0;
    }