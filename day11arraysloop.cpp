// LOOPS IN ARRAYs-find smallest/largest in array
//+ infinity in cpp is INT_MAX
#include <iostream>
using namespace std;

int main() {
    int ar[] ={1,-90,76,0,-99};
int size=5;
int smallest=INT_MAX; //cuz now all nos will be smaller than this
int largest=INT_MIN ; // now every nos will be bigger than it
int smallestIndex=-1;
int largestIndex=-1;
// longer method
 for(int i =0; i<size;i++) {
   if(ar[i] < smallest) {
        smallest = ar[i];
        smallestIndex=i;
   }
  //shorter method 
//   largest=max(ar[i],largest);
//   smallest = min(ar[i],smallest) ;
// } 
  if(ar[i] > largest) {
        largest = ar[i];
        largestIndex=i;


}
 }
 cout << "smallest value is " << smallest << " at " << smallestIndex << endl;
 cout << "largest value is " << largest << " at " << largestIndex << endl;
 return 0 ;
}