/*OPERATOR PRECEDENCE(importance)
 !, ++, --(unary operators) 1st R to L
 *, /, %                    2nd L to R
 +, -                       3rd L to R
<, <=, >=, >                4th L to R
==, !=                      5th L to R
&&                          6th L to R
!!                          7th L to R
=(assignment operator)      8th R to L 
 ans = 5-2*6 so R to L cuz we want all operations
       to get over first and then = shows the value
        l to r means like ans=4*5%2 so here operation 
        will occur left to right so it will be 20%4 and
        hence ans = 0*/

        /*Scope-it is a area where variables are stored
            1. local scope- ie the variables in loops,if else,for or 
               functions or  in curly braces...they cant be called directly
               and cant be printed ie. cannot be shown as output when cout
            2. global scope- ie the variables declared before a int or void 
               or wtv function and after using namespace std;*/

               // eg of local
               /*1.for(int x=0)
                 2.while (int a=6) {
                 3. int main () { 
                    int x=10;
                 }
                    cout << x << endl;
                    return 0; 
                 } (it will show error cuz its local 
                    scope and we cant call it)*/

                // eg of global
                /* #include <iostream>
                using namespace std;
 
                int x=10;

                int fun() {
                 cout << x << endl;
                 }
                int main() {
                fun(); //we called fun function as well
                         so now it will print 10 twice cuz 
                         both fun and main have access to it
                 cout<< x << endl;
                 reurn 0;
                 }
                // now it has access to int x=10 so in any function
                we can call it ie. now its global scope

                */