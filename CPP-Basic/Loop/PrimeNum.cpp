#include <iostream>
#include <string>
using namespace std;

string isPrimeNum(int n) {
    int count = 0;
    string r;

    for(int i = 1; i <= n; i++) {
        if(n%i == 0 && n != 1) {
            count += 1;
        }
    }
    if(count == 2) {
        r = "Prime Number!!!";
        return r;
    }
    return "Not Prime Number.";
}

int main() {
    int x = 1, y = 3, z = 12;

    cout << isPrimeNum(x) << endl;
    cout << isPrimeNum(y) << endl;
    cout << isPrimeNum(z) << endl;

    return 0;
}