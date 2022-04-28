#include <iostream>
#include <bitset>
using namespace std;

void bitwise() {
    int x = 11, y = 5, z;

    bitset<8> i(x);
    bitset<8> j(y);
    cout << "x=" << i << endl;
    cout << "y=" << j << endl;
    cout << endl;

    z = x&y;
    bitset<8> a(z);
    cout << a << endl;

    z = x|y;
    bitset<8> b(z);
    cout << b << endl;

    z = ~x;
    bitset<8> c(z);
    cout << c << endl;

    z = x<<y;
    bitset<8> d(z);
    cout << d << endl;

    z = x>>y;
    bitset<8> f(z);
    cout << f << endl;
}

int main() {
    bitwise();
    return 0;
}