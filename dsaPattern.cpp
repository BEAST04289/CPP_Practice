/*  
 *****
 *****
 *****
 *****
 *****
*/


 /*   
 #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<< "*" ;
    }
    cout <<endl;
 }



    return 0;
 } 
 
 */




 /*
  *
  **
  ***
  ****
  *****
  */
  
/*#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< "*" ;
    }
    cout <<endl;
 }



    return 0;
 } */


/* 1
   12
   123
   1234
   12345 */

 /*  #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< j ;
    }
    cout <<endl;
 }



    return 0;
 }
*/
 

/* 1
   22
   333
   4444
   55555 */

  /*  #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< i ;
    }
    cout <<endl;
 }
    return 0;
 }
*/

/* 
*****
****
***
**
*
 */

/*  #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=5;j>=i;j--){
        cout<< "*" ;
    }
    cout <<endl;
 }
    return 0;
 }
*/

/*
12345
1234
123
12
1
*/

/* #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=n-i+1;j++){
        cout<< j ;
    }
    cout <<endl;
 }
    return 0;
 }

 */

/* 
       *
      ***
     *****
    *******
   *********

    */

   /* #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j,s;
 for(i=1;i<=n;i++){
    for(s=1;s<=n-i;s++){
        cout<<" ";
    }
    for(j=1;j<=2*i-1;j++){
        cout<< "*" ;
    }
    cout <<endl;
 }
    return 0;
 }
 */

 /* 
  *********
   *******
    *****
     ***
      *   
 */

/* #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j,s;
 for(i=5;i>=1;i--){
    for(s=5;s>=i;s--){
        cout<<" ";
    }
    for(j=2*i-1;j>=1;j--){
        cout<< "*" ;
    }
    cout <<endl;
 }
    return 0;
 }
*/

/*for   *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *  combine both codes above
*/


/*
   *
   **
   ***
   ****
   *****
   ****
   ***
   **
   *
*/

/* #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j,s;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< "*" ;
    }
    cout <<endl;
}
for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<< "*" ;
    }
    cout <<endl;
} 
    return 0;
 }
    */

    /*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
    */
  /* #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        if((i+j)%2==0){
            cout<< "1" ;
            cout<<" ";
        }
        else{
            cout<< "0" ;
            cout<<" ";
        }
    }
    cout <<endl;
   }
    return 0;
 }
   */

   /*
     1      1
     12    21
     123  321
     12344321
   */


/* #include <bits/stdc++.h>
using namespace std;

 int main() {

int n=4,i,j;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< j ;
    }


  int space=2*(n-i);
 for(j=1;j<=space;j++){
        cout<<" ";
    }
    
        for(j=i;j>=1;j--){
            cout<< j ;
               
        }
cout<<endl;
    }
 return 0;

 }
*/
  
/*
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
*/

/*
#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j,count=1;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< count ;
        cout<<" ";
        count++;
    }
    cout <<endl;
   }
    return 0;
 }
*/

/*
A
AB
ABC
ABCD
ABCDE
*/

/*
#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
        char ch='A'+j;
        cout<< ch ;
    }
    cout <<endl;
   }
    return 0;
 }
 */

 /*
 ABCDE
 ABCD
 ABC
 AB
 A
 */

 /*
 #include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=1;i<=n;i++){
   for(j=0;j<=n-i;j++){
        char ch='A'+j;
        cout<< ch ;
    }
    cout <<endl;
   }
    return 0;
 }
 */
/*
A
BB
CCC
DDDD
EEEEE
*/
/* 
#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        char ch='A'+i-1;
        cout<< ch ;
    }
    cout <<endl;
   }
    return 0;
 }
 */
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

/*
#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(j=0;j<=i;j++){
        char ch='A'+j;
        cout<< ch ;
    }
    for(j=i-1;j>=0;j--){
        char ch='A'+j;
        cout<< ch ;
    }
    cout <<endl;
   }
    return 0;
 }
 */

 /*
 E
 D E
 C D E
 B C D E
 A B C D E
 */

/*
#include <bits/stdc++.h>
using namespace std;

 int main() {
int n=5,i,j;
   for(i=0;i<n;i++){
  for(char ch='E'-i;ch<='E';ch++){
        cout<< ch << " " ;
    }
  cout <<endl;
  }
  return 0;
 }
 */

/*
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 *        *
 **      **
 ***    *** 
 ****  **** 
 **********
 */
/*
#include <bits/stdc++.h>
using namespace std;

 int main() { 

int n=5,i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        cout<< "*" ;
    }
    for(j=0;j<2*i;j++){
        cout<<" ";
    }
     for(j=0;j<n-i;j++){
        cout<< "*" ;
    }
    cout <<endl;
}
for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
        cout<< "*" ;
    }
    for(j=0;j<2*(n-i);j++){
        cout<<" ";
    }
     for(j=0;j<i;j++){
        cout<< "*" ;
    }
    cout <<endl;
}
return 0; 
 }
*/

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
/*
#include <bits/stdc++.h>
using namespace std;

 int main() {
    int n=5,i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<< "*" ;
    }
    for(j=0;j<2*(n-i);j++){
        cout<<" ";
    }
     for(j=0;j<i;j++){
        cout<< "*" ;
    }
    cout <<endl;
}
for(i=1;i<=n-1;i++){
    for(j=4;j>=i;j--){
        cout<< "*" ;
    }
 for(j=0;j<2*i;j++){
        cout<<" ";
     }
     for(j=4;j>=i;j--){
        cout<< "*" ;
    }
    cout <<endl;
}
return 0; 
 }
 */

/*
 ****
 *  *
 *  *
 ****
*/ 

/*
#include <bits/stdc++.h>
using namespace std;    

 int main() {
int n=10,i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==0 || j==0 || i==n-1 || j==n-1){
            cout<< "*" ;
        }
        else{
            cout<<" ";
        }
    }
    cout <<endl;
 }
    return 0;
 }
    */

    /*
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4 
    
    */
   /*
   #include <bits/stdc++.h>
using namespace std;

 int main() {  
    int n=4;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<< n - min(min(top,bottom),min(left,right)) << " ";
        }
        cout<<endl;
    }
    return 0;
}
    */