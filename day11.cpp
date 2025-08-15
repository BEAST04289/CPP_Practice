/*BITWISE OPERATORS
1. Bitwise and (&) - similar to logical and 
            eg 0&0-0
               0&1-0
               1&0-0
               1&1-1
say we want a&b and a=4(100) and b=8(1000)
so now and both's binary form 0100
                            & 1000
                              0000 ie. 0 answer
*/
/* #include <iostream>
using namespace std;

int main() {
    int a=4 , b=8;
    cout << (a&b) << endl;
    return 0;
}
*/
/*2. Bitwise or (|) - same as logical or
                      0|0 - 0
                      0|1 - 1
                      1|0 - 1
                      1|1 - 1 
                      0100
                    | 1000
                      1100 = 12

                      */
                     
//  #include <iostream>
// using namespace std;

// int main() {
//     int a=4 , b=8;
//     cout << (a|b) << endl;
//     return 0;
// }

/*3. bitwise XOR (exclusive or) (^)
if 0^0 - 0
   1^1 - 0
   0^1 - 1
   1^0 - 1
   eg 0100
     ^1000
      1100 = 12
      */

     /* #include <iostream>
using namespace std;

int main() {
    int a=4 , b=8;
    cout << (a^b)<< endl;
    return 0;
}*/

/* bitwise left shift operator (<<) - it shifts towrds left
 eg n=4 and n<<1
  so 4 = 100 and we used n<<1 so now
   it will shift towrds left 1 space
    so now it will be 1000 (fill left spaces with 0 so 4th place we filled with 0)*/       

    //            #include <iostream>
// using namespace std;

// int main() {
//     int a=4 ; 
//     cout << (a<<1)<< endl;
//     return 0; // answer will be 8
// }

/* bitwise right shift operator (>>) - it shifts towrds right
 eg n=4 and n>>2
  so 4 = 100 and we used n>>2 so now
   it will shift towrds right 2 space
    so now it will be 001 (fill left spaces with 0 so the 1st place we filled with 0)*/
 #include <iostream>
using namespace std;

int main() {
    int a=4 ;
    cout << (a>>2)<< endl;
    return 0; // answer will be 1
}