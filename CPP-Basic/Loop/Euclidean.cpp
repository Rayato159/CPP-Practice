#include <iostream>
using namespace std;

int euclidean(int m, int n) {
    int gcp = 0;

    while(m != n) {
        if(m > n) {
            m -= n;
            gcp = m;
        } else {
            n -= m;
            gcp = n;
        }
    }
    return gcp;
}

int main() {
    int m = 30, n = 21;

    cout << euclidean(m, n) << endl;
    return 0;
}