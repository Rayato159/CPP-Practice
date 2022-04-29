#include <iostream>
using namespace std;

void perfect(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            sum += i;
        }
    }
    if(2*n == sum) {
        cout << "Perfect Number!!!" << endl;
    } else {
        cout << "Not a Perfect Number." << endl;
    }
}

int main() {
    int x = 6;

    perfect(x);

    return 0;
}