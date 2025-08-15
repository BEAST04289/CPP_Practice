#include <iostream>
using namespace std;
 
void reverseArr(int arr[],int size){
    int start=0,end=size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end--;
    
    
    }
}
int main (){
    int arr[]={4,6,73,78,8,3,7,83,346,69};
    int size=10;
    reverseArr(arr,size);
    for(int i=0;i<size;i++){
        cout <<arr[i] << " ";
    }
return 0;
}