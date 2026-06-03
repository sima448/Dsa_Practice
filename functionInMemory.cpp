#include<iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;

    for(int i = 1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

int fun() {
    return 2;
    cout<< "hello" << endl;
}



int main() {
    // cout << factorialN(4) << endl;
     //cout<< factorialN(5) << endl;
     fun();

    return 0;
}