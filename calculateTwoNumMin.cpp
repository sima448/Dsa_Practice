#include<iostream>
using namespace std;

//sum of 2 number
double sum(double a, double b) {
    double s = a  +b;
    return s;
}
//min of 2 num
int minOfTwo(int a, int b){
    if(a < b){
        return a;

    } else {
        return b;
    }
}

int main() {
    cout << "min = " << minOfTwo(5, 3) << endl;

    return 0;
}