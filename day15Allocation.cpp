/*static allocation is of fixed size 
and determined at compile time like arrays
dynamic allocation is done at runtime
 using pointers like vectors and can be resized 
 unlike static allocation which is fixed in size
 static is stored in stack and dynamic in heap*/
/*when we pushback it creates an array of size 1 
and stores the value entered 2nd time it tries to store in the same
array but there is no space so it doubles it self
to 2 and now 3rd time it doubles to 4 but stores
3 values only but capacity is 4 then 8*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector <int> vec;
vec.push_back(0);
vec.push_back(1);
vec.push_back(2);
cout << vec.size() << endl;// size 3 (push back stored values)
cout << vec.capacity() << endl;//1 then 2 then 4 then 8

return 0;
}
//n^n=0
//n^0=n