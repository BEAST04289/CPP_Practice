#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "in function\n";
    for(int i =0 ; i<size ; i++) {
        arr[i]= 2*arr[i];
    }
    }
    //PASS BY REFERRENCE -We called changeArr before calculation of main
    //so the values were doubled and hence it did not print 1 2 3
    //instead printed 2 4 6
    /*pass by reference means we are directly changing the value 
    at the original address of the array and there is no temporary 
    address eg. here were changing the value of int arr from 1 2 3
    to 2 4 6 from chnage array to the og address of arr 
    if we change anything in any array it will directly change in
    main function as well*/
    int main() {
int arr[] = {1,2,3};
changeArr(arr,3);
cout << "in main\n";
  for(int i =0 ; i<3 ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
    }
