/* ARRAYS
data structure-store data 
1.array reduces the stress to create n numbers of 
variables to store data
2.stores only same type of variables like if storing int value
then it will store only int value for other places as well
3.they are contiguous in memory ie.all data is stored together
4.its linear(straight line structure)*/

#include <iostream>
using namespace std;   

int main() {
    int size=5;
    int marks [size] = {2,4,5,6,6};

// double price [] = {2,3,4,5,30.00};
// array positions starts from 0 - size-1
for(int i=0; i < size ;i++){
cout << marks[i] << endl;
//cout << price[2] << endl;  
// shows value at 2(3rd position ie.4)  
//int sz=sizeof(marks)/
/*cout << sizeof(marks) <<endl; // shows 40 cuz 4 bytesx10 
cout << sizeof(marks) / sizeof(int) <<endl;*/
}
 return 0;
}
