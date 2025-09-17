#include <iostream>
#include<vector>
using namespace std;    
//for sorted array
vector<int>pairSum(vector<int> num, int target) {
    vector<int> ans;
    int n=num.size();
    int i=0,j=n-1;//taking smallest value of i and largest value of j
 while (i<j) {
     if (num[i] + num[j] == target) {
         ans.push_back(i);
         ans.push_back(j);
         return ans;
     } else if (num[i] + num[j] < target) {
         i++;
     } else {
         j--;
     }
 }
    return ans;
}
int main() {
    vector<int> num = {2, 7, 11, 15};
    int target = 22;
    vector<int> ans = pairSum(num, target);
    cout << ans[0] << " " << ans[1] << endl;
    //be careful of ans[0] and ans[1]
    return 0;
}

