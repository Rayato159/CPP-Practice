#include <iostream>
using namespace std;

int main() {
    int A[]={2, 4, 6, 8, 10, 12};
    int *p = A;

    // move pointer to next location to print 4
    p = p + 1;
    cout << *p << endl;
    
    p = p + 3; // pointer will be pointing on 10
    cout << *p << endl;
    
    // complete this statement to print 2 without moving pointer
    cout << p[-4] << endl;

    return 0;
}