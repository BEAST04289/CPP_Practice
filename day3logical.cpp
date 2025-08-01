// OR || (Logical OR)- koi ek true statement hoga toh poora true answer ho jayega AND && (Logical AND)- dono true hone chahiye tabhi true aayega NOT ! (Logical NOT) - turns true to false and false to true
#include <iostream>
using namespace std; 
int main() {
    bool a = true, b = false;
    
    cout << "a || b: " << (a || b) << endl; // true
    cout << "a && b: " << (a && b) << endl; // false
    cout << "!a: " << (!a) << endl;         // false
    cout << "!b: " << (!b) << endl;         // true
    
    return 0;
}
