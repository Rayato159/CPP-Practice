#include <iostream>
#include <climits>
using namespace std;

int Min(int *A, int size) {
    int min = A[0];
    for(int i = 1; i < size; i ++) {
        if(min > A[i]) {
            min = A[i];
        }
    }
    return min;
}

int Max(int *A, int size) {
    int max = A[0];
    for(int i = 1; i < size; i ++) {
        if(max < A[i]) {
            max = A[i];
        }
    }
    return max;
}

int main() {
    int A[] = {4, 8, 6, 9, 5, 2, 7};
    int size = *(&A + 1) - A;

    cout << Min(A, size) << endl;
    cout << Max(A, size) << endl;

    return 0;
}