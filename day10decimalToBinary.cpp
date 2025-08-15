/*to convert a number from decimal to binary 
divide it continuously with 2 
until its remainder = 0
and the remainders throughout the division 
will be its binary code*/
//eg
/*2/2=21 and 0 remainder
21/2=10 and 1 remainder 
10/2= 5 and 0 remainder
5/2 = 2 and 1 remainder
2/2 = 1 and 0 remainder 
1/2=0 and   1 remainder
so binary code for 42 will be 101010*/  
#include <iostream>
using namespace std;
int decToBinary(int decNum){
  int ans =0, pow=1; 
  while (decNum > 0) {
    int rem=decNum % 2;
    decNum /= 2;
    ans += (rem*pow);
    pow*=10;

  }
  return ans;
}
int main() {

cout << decToBinary(89) << endl;
return 0;
}

