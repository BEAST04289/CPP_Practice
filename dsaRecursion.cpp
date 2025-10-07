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

//