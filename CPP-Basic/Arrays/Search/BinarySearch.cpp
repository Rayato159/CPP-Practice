#include <iostream>
using namespace std;

int BinarySearch(int *A, int l, int h, int key) {
    int mid = (l + h)/2;

    while(l <= h) {
        if(key == A[mid]) {
            return mid;
        } else if(key < A[mid]) {
            h = mid - 1;
            mid = (l + h)/2;
        } else if(key > A[mid]) {
            l = mid + 1;
            mid = (l + h)/2;
        }
    }
    return -1;
}

int main() {
    int A[11] = { 6, 8, 13, 17, 20, 22, 25, 28, 30, 35, 50 };
    int l = 0, h = *(&A + 1) - A - 1, key = 25;

    // Note that: &A is mean the reference of A[10] not A[0] and A or *A is mean address of A[0].
    // Imagine if &A = 0 and &A[10] = 10 then &A + 1 = 10.
    // Is need to *(&A + 1) because A is type of * (A is actaully *A)
    // Then *(&A + 1) - A is mean of *(&A + 1) - *A
    cout << BinarySearch(A, l, h, key) << ", " << key << endl;
    return 0;
}