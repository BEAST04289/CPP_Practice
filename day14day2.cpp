#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <char> vec2={'a','b','c'};
    // size of vector
    cout << "size=" << vec2.size() << endl;
    /*push back-imagine if size is 0..now after pushing 
    size becomes 1*/
    vector<int> vec;//vector of size 0
    vec.push_back(24);//vector size increased to 1 with value 25
    vec.push_back(25);
    vec.push_back(246);
    vec.push_back(234);
    cout << "vector size post pushback=" << vec.size() <<endl;
    //pop back-decreases 
    vec.pop_back();//234
  /* for(int val : vec) {
    cout<<val<<endl;//shows all the values inside the vector*/
   cout <<vec.front() <<endl; //1st value
   cout <<vec.back() <<endl; //last value
   cout <<vec.at(1) <<endl;//value at index 1
   
    return 0;


}