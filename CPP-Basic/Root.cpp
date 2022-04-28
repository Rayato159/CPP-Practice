#include <iostream>
#include <cmath>
using namespace std;

void quadratic(float *r, float a , float b , float c) {
    r[0] = (-b + sqrt(pow(b, 2.0) - (4*a*c)))/(2*a);
    r[1] = (-b - sqrt(pow(b, 2.0) - (4*a*c)))/(2*a);
}

int main() {
    float r[2];
    float a = -2.0, b = 2.0, c = 3;

    quadratic(r, a, b, c);
    
    for(int i = 0; i < 2; i ++) {
        cout << r[i] << endl;
    }
    return 0;
}