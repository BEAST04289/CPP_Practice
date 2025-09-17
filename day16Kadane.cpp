//0(n)linear
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, -4, 5, -1, 7,-8}; // int arr[5]={1,2,3,4,5}
    int n = arr.size();
    int maxSum=INT_MIN,currSum=0;
    for (int i = 0; i < n; i++) {
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0) currSum=0;
    }
    cout << maxSum << endl;
    return 0;
}
//0 3 -1 0 5 4 11 3 
//0 3  3 3 5 5 11 