#include <iostream>
using namespace std;

int main() {
    int A[8] = {0};

    for(auto &x: A) {
        ++x;
    }
    for(auto x: A) {
        cout << x << " " << flush;
    }
    cout << endl;

    return 0;
}