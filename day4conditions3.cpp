#include <iostream>
using namespace std;
 
int main() {
 cout << "enter marks: ";
int marks;
cin >> marks;
if (marks >= 90) {
    cout << "Grade: A" << endl;
}
else if (marks >= 80 && marks < 90) {
    cout << "Grade: B" << endl;
}
else if (marks >= 70 && marks < 80) {
    cout << "Grade: C" << endl;
}
else {
    cout << "Grade: D" << endl;
}
    return 0;
    }