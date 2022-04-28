#include <iostream>
using namespace std;

void factor(int n) {
    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            cout << i << " " << flush;
        } else {
            continue;
        }
    }
    cout << endl;
}

int main() {
    int n = 8;

    factor(n);
    
    return 0;
}