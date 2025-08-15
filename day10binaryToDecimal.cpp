/*101010 right to left
multiply by 2^i, i is the place where we
are starting from that is from left to righrt increase i
*/
 /*1     0     1     0     1     0
   2^5 + 2^4 + 2^3 + 2^2 + 2^1 + 2^0
   32  + 0   + 8   + 0   + 2   + 0 
   = 42  */
   #include <iostream>
   using namespace std;
   
   int binNum(int bin){
    int ans=0, pow =1,rem;
    while(bin > 0) {
      rem = bin%10;
      ans += rem*pow;
      bin /=10;
      pow *=2;


    }
    return ans;
   }

   int main () {
    cout << binNum(1010) << endl;
    return 0;
   }
   /* twos compliment
    1. convert to binary form eg -10 -> 1010
    2. prefix with a 0 if negative -> 01010
    3. is a compilmet ie. if 1 replace with 0 and vice verse ->10101
    4. add +1 -> 10101 
                 +   1
                 10110
                 ^
                 |
                 1 means here its negative
    */
   /* binary to dec 
   1. do compliment 10110 -> 01001
   2. +1 -> 01010
   0(1010) -> - (10) 
   */