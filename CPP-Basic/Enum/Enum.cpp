#include <iostream>
using namespace std;

int main() {
    enum Cards {
        Club = 0,
        Spade = 1,
        Heart = 2,
        Diamon = 3,
    };

    Cards c;
    c = Heart;

    cout << c << endl;

    return 0;
}