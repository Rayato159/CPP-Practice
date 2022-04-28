#include <iostream>
using namespace std;

int main() {
    int *p = new int[5];

    for(int i = 0; i < 5; i++) {
        p[i] = i;
        cout << p[i] << " ";
    }
    cout << endl;

    // NULL is just not pointer to any memory
    // but the variable is still on memory.
    p = NULL;
    for(int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // Use delete when you need to remove a variable from memory NOT NULL.
    delete []p;
    return 0;
}