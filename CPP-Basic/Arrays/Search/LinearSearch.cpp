#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LinearSearch(int *key, int *A) {
    int count = 1;

    for(int i=0; i<10; i++) {
        if(A[i] == *key) {
            cout << count << " " << *key << endl;
            break;
        }
        count++;
    }
}

int main() {
    srand(time(NULL));
    int A[10] = { 0 };

    for(int i=0; i<10; i++) {
        A[i] = rand() % 10;
        cout << A[i] << " " << flush;
    }
    cout << endl;

    int key;
    cin >> key;

    LinearSearch(&key, A);

    return 0; 
}