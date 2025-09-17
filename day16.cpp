/*subarray- say array is 1 2 3 4 5
            subarray is 1,2,3,4,5   subarray=n*(n+1)/2
                      12,23,34,45   start     end(st to n-1)
                      123,234,345     0        0,1,2,3..
                        1234,2345     1        1,2,3...
                            12345     2        2,3,4,5
                      */
/*for(st=0; st<n; st++)
  for(end=st; end<n; end++)
    print subarray(arr,st,end); */
    #include<iostream>
    #include<vector>
    using namespace std;

    int main() {
        vector<int> arr = {1, 2, 3, 4, 5}; // int arr[5]={1,2,3,4,5}
        int n = arr.size();
        for (int st = 0; st < n; st++) {
            for (int end = st; end < n; end++) {
                for (int i = st; i <= end; i++) {
                    cout << arr[i] << " ";
                }
               cout << " ";
            }
             cout << endl;
        }
        return 0;
    }