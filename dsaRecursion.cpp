//when a function calls itself until a specific condition is met, it is known as recursion.
// the condition that stops the recursion is known as the base condition.
// Base condition is a condition that stops the recursion from continuing indefinitely.
// Every recursive function must have a base condition to prevent infinite recursion and eventual stack overflow.
// Types of recursion
// 1. Direct recursion: when a function calls itself directly.
// 2. Indirect recursion: when a function calls another function and that function calls the first function again.
// 3. Infinite recursion: when there is no base condition or the base condition is never met, it leads to infinite recursion which causes stack overflow error.
/* if we use return in a nested for loop it end the same loop and go back to the function that called it.
   if we use break in a nested for loop it ends the main loop and goes to the next line of code after the loop.
*/
// Recursion can be used to solve problems that can be broken down into smaller subproblems of the same type.
/* Recursion tree
   A recursion tree is a tree representation of the recursive calls made by a function. Each node in the tree represents a function call,
   and the children of a node represent the recursive calls made by that function.
   The root of the tree represents the initial function call, and the leaves of the tree represent the base cases where the recursion stops.
   Recursion trees are useful for visualizing and analyzing the time complexity of recursive algorithms.
*/
  
//PRINTING NAME 5 TIMES USING RECURSION

/*
#include <bits/stdc++.h>
using namespace std;

void print(const string &name, int count = 0) {
    if (count == 5) {
        return;
    }
    cout << name << endl;
    print(name, count + 1);
}

int main() {
    string name;
    cin >> name;
    print(name);
    return 0;
}

*/

//PRINT NUMBERS FROM 1 TO N USING RECURSION

/*
#include <bits/stdc++.h>
using namespace std; 

void print(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << " ";
    print(i + 1, n);
}
int main() {
    int n;
    cin >> n;
    print(1, n);
    return 0;
}

*/

//PRINT NUMBERS FROM N TO 1 USING RECURSION

/*
#include <bits/stdc++.h>
using namespace std; 

void print(int n, int i=1) {
    if (n==0 ) {
        return;
    }
    cout << i << " ";
    print(n ,i--);
 
}
int main() {
    int n;
    cin >> n;
    print(n , n);
    return 0;
}
*/

//PRINT FROM 1 TO N USING RECURSION (BACKTRACKING)

/*
#include <bits/stdc++.h>
using namespace std; 

void print(int n,int i =1) {
    if(i==n+1) return;
 cout << i << " ";
 print(n,i+1);
 
}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
    */

//PRINT FROM N TO 1 USING RECURSION (BACKTRACKING)

/*
#include <bits/stdc++.h>
using namespace std; 

void print(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}
*/

// SUM OF FIRST N NATURAL NUMBERS USING RECURSION

//Parameterised Recursion

/*
#include<bits/stdc++.h>
using namespace std;
// we want the function to print the sum and not return it
void sum(int n, int i,  int s) { // non initialised
    if (i == n + 1) {
        cout << "sum = " << s << endl;
        return;
    }
    s = s + i;
    sum(n, i + 1, s);
}

int main() {
    int n;
    cin >> n;
    sum(n,1,0); //another way other than using global variable
    return 0;
}

*/


//Functional Recursion
// we want function to return not print the sum

/*
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {  //f(n) = n + f(n-1)
     //f(3) = 3 + f(2)
     //f(2) = 2 + f(1)
     //f(1) = 1 + f(0)
     //f(0) = 0
     //f(1) = 1 + 0 = 1
     //f(2) = 2 + 1 = 3
     //f(3) = 3 + 3 = 6
     // so sum of first n natural numbers is n*(n+1)/2
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}
   int main() {
 int n;
 cin>>n;
 sum(n);
 cout << "sum is " << sum(n); //important to use cout here to print the returned value
 return 0;

   }

   */

   //REVERSE AN ARRAY USING RECURSION
/*
#include <bits/stdc++.h>
using namespace std;
 
void rev(int i,int arr[],int n) {
    if (i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
    
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
 rev(0,arr,n);
for(int i=0;i<n;i++){
    cout << arr[i] << " ";

 
}
return 0;
}
*/

//CHECK IF STRING IS PALINDROME OR NOT

/*
#include <bits/stdc++.h>
using namespace std;
 
bool pal(int i,string &s) {
if(i>=s.size()/2) 
    return true;
    if(s[i] != s[s.size() - i - 1])
        return false;
    return pal(i+1,s);

}
int main() {
    string s="adda";
    cout << pal(0,s);

return 0;
}
 */

 //FIBONACCI SERIES USING RECURSION

 /*
 #include<bits/stdc++.h>
    using namespace std;

    int fib(int n) {
       if(n==0) return 0;
       if(n==1) return 1;
         //fib(2)=fib(1)+fib(0)=1+0=1
         //fib(3)=fib(2)+fib(1)=1+1=2
         //fib(4)=fib(3)+fib(2)=2+1=3
         //fib(5)=fib(4)+fib(3)=3+2=5
         // so on
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);

    }

    int main() {
        int n;
        cin >> n;
        cout << fib(n);
        return 0;
    }

    */