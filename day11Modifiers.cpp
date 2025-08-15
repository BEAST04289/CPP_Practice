/*DATA TYPE MODIFIERS
 change meaning of existing data types ie. int double etc.
 eg. int takes 4 bytes which is 32 bits and hence 32 gaps 
0 or 1  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
        ^ (msb)
        0 for +ve nos or 1 for -ve nos
        0 to 2^31 -1  or   -2^31 combinations
         */
#include <iostream>
using namespace std; 
// long gives 4 bytes extra so int has 8 bits ie 64 bits now so -2^63 to 2^63-1..in linux ONLY in windows its 4 bytes only
// long long int is 8 bytes
int main() {
    unsigned int x=-10;
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl; // short reduces to 2 bytes
     cout << sizeof(long long int) << endl;
    cout << x<< endl; //absolute value
    return 0;
}
//int is SIGNED ie it can store both negative and positive values
//we can UNSIGN it to store only positive data even if entered data is -ve
//bank acc number or customer id
// we can now store 2^32 -1 values cuz now msb is of no use
//and we can store value there instead of + or -