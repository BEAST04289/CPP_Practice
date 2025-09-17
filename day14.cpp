#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector <char> vec2={'a','b','c'};
   cout << "size= " << vec2.size() << endl;
   for(char val : vec2) {
    cout<<val<<endl; //size of vector 
   }
    return 0;


}