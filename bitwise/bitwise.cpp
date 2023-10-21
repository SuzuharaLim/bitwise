#include<iostream>

using namespace std;

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int subtract(int a, int b) {
    b = add(~b, 1);
    return add(a, b);
}

int main() {
    cout << add(2, 3)<<endl;
    cout << subtract(2,3) << endl;
}