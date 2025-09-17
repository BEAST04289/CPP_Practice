/* arrays cant be resized but vectors can be resized
afterwards */ 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    //types of creating a vector
    vector<int> vec={1,2,3};//created a vector of name vec and that stores integers and has size of 3
    vector <int> vec1(5,1);//vector of size 5 and stored index value of 1 in each
    vector <char> vec2={'a','b','c'};
    //for each loop
    for(char i : vec2){ // stores the value inside the index and not the index itself
        cout << i << endl; 
    }
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl;
    cout << vec1[3] << endl;
    cout << vec1[4] << endl;

    cout << vec[2] << endl;
    return 0;


}