#include <iostream>
#include <vector>
//sort- sort(nums.begin(), nums.end());
using namespace std;

int main() {
vector<int>num={2,3,2,2,3,2,2,6};
for(int val : num) {
    int freq=0;
    for(int element : num) {
            if(element ==val) {
                freq++;
            }
        }
        if(freq > num.size()/2) {
         cout << val<<endl;
         return 0;
        }
    }
    cout<<"no majority found"<<endl;
    return 0;

}


